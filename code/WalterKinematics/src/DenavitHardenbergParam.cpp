
#include "DenavitHardenbergParam.h"

DenavitHardenbergParams::DenavitHardenbergParams() {
	init(0,0,0);
};

DenavitHardenbergParams::DenavitHardenbergParams(const rational  pAlpha, const rational pA, const rational pD) {
	init(pAlpha, pA, pD);
};

// initialize with the passed Denavit Hardenberg params and precompute sin/cos
void DenavitHardenbergParams::init(const rational pAlpha, const rational pA, const rational pD) {
		val_a = pA;
		val_d = pD;
		val_alpha = pAlpha;

        ca = cos(val_alpha);
        sa = sin(val_alpha);
};

