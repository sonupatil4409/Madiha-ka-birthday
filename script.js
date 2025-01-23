const stage = document.getElementById("stage");
const nextButton = document.getElementById("nextButton");

let step = 0;

nextButton.addEventListener("click", () => {
    stage.innerHTML = "";
    step++;

    if (step === 1) {
        // Balloons
        for (let i = 0; i < 4; i++) {
            const balloon = document.createElement("div");
            balloon.className = "balloon";
            balloon.style.left = `${20 + i * 20}%`;
            stage.appendChild(balloon);
        }
        nextButton.textContent = "Next";
        stage.appendChild(nextButton);
    } else if (step === 2) {
        // Candles
        const candlesDiv = document.createElement("div");
        candlesDiv.className = "candles";
        for (let i = 0; i < 4; i++) {
            const candle = document.createElement("div");
            candle.className = "candle";
            const flame = document.createElement("div");
            flame.className = "flame";
            candle.appendChild(flame);
            candlesDiv.appendChild(candle);
        }
        stage.appendChild(candlesDiv);
        nextButton.textContent = "Blow Candles";
        stage.appendChild(nextButton);
    } else if (step === 3) {
        // Cake cutting
        const cake = document.createElement("div");
        cake.className = "cake";
        const cakePiece = document.createElement("div");
        cakePiece.className = "cake-piece";
        cake.appendChild(cakePiece);
        stage.appendChild(cake);
        nextButton.textContent = "Cut Cake";
        stage.appendChild(nextButton);

        nextButton.addEventListener("click", () => {
            cakePiece.style.transform = "scale(1)";
        });
    } else if (step === 4) {
        // Birthday Wish
        const wish = document.createElement("div");
        wish.className = "wish";
        wish.textContent = "Wishing you a wonderful birthday, Madiha!";
        stage.appendChild(wish);
        wish.style.opacity = 1;
        nextButton.remove();
    }
});
