const stage = document.getElementById("stage");
const nextButton = document.getElementById("nextButton");

let step = 0;

nextButton.addEventListener("click", () => {
    stage.innerHTML = "";
    step++;

    if (step === 1) {
        // Add Balloons
        const balloonContainer = document.createElement("div");
        balloonContainer.id = "balloons";
        for (let i = 0; i < 4; i++) {
            const balloon = document.createElement("div");
            balloon.className = "balloon";
            balloonContainer.appendChild(balloon);
        }
        stage.appendChild(balloonContainer);
        nextButton.textContent = "Next";
        stage.appendChild(nextButton);
    } else if (step === 2) {
        // Add Candles
        stage.innerHTML = `<div class="candles">
            <div class="candle"></div>
            <div class="candle"></div>
            <div class="candle"></div>
            <div class="candle"></div>
        </div>`;
        nextButton.textContent = "Blow Candles";
        stage.appendChild(nextButton);
    } else if (step === 3) {
        // Cake Cutting Animation
        stage.innerHTML = `<div class="cake-container">
            <div class="cake"></div>
            <div class="knife"></div>
            <div class="cake-piece"></div>
        </div>`;
        nextButton.textContent = "Cut Cake";

        // Simulate Knife Movement and Cake Piece Animation
        nextButton.addEventListener("click", () => {
            const knife = document.querySelector(".knife");
            const piece = document.querySelector(".cake-piece");
            knife.style.transform = "rotate(45deg)";
            piece.style.opacity = 1;
            piece.style.transform = "scale(1)";
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
