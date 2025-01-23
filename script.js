const stage = document.getElementById("stage");
const nextBtn = document.getElementById("next-btn");

let step = 0;

nextBtn.addEventListener("click", () => {
    stage.innerHTML = "";
    step++;

    if (step === 1) {
        // Balloons Stage
        const balloonStage = document.createElement("div");
        balloonStage.id = "balloon-stage";

        for (let i = 0; i < 4; i++) {
            const balloon = document.createElement("div");
            balloon.className = "balloon";
            balloonStage.appendChild(balloon);
        }

        stage.appendChild(balloonStage);
        nextBtn.textContent = "Next";
        stage.appendChild(nextBtn);
    } else if (step === 2) {
        // Candles Stage
        const candles = document.createElement("div");
        candles.className = "candles";

        for (let i = 0; i < 4; i++) {
            const candle = document.createElement("div");
            candle.className = "candle";
            candles.appendChild(candle);
        }

        stage.appendChild(candles);
        nextBtn.textContent = "Blow Candles";
    } else if (step === 3) {
        // Cake Cutting Stage
        const cake = document.createElement("div");
        cake.className = "cake";

        const cakePiece = document.createElement("div");
        cakePiece.className = "cake-piece";

        cake.appendChild(cakePiece);
        stage.appendChild(cake);

        nextBtn.textContent = "Cut the Cake";
        nextBtn.addEventListener("click", () => {
            cakePiece.style.transform = "scale(1)";
            cakePiece.style.opacity = 1;
        });
    } else if (step === 4) {
        // Final Wish
        const wish = document.createElement("div");
        wish.id = "wish";
        wish.textContent = "Wishing you a very Happy Birthday, Madiha!";
        stage.appendChild(wish);

        wish.style.opacity = 1;
        nextBtn.remove();
    }
});
