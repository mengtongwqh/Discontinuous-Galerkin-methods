#include <functional>
#include <cstdio>
#include <cmath>
using namespace std;


#include "Utilities/Display.hpp"
#include "Utilities/Ones.hpp"
#include "Utilities/Zeros.hpp"
#include "Utilities/SolveAxb.hpp"
#include "Utilities/Inverse.hpp"
#include "Utilities/PolyEval.hpp"
#include "Utilities/PolyDeriv.hpp"
#include "Utilities/Inverse.hpp"
#include "Utilities/LegendrePolynomial.hpp"
#include "Utilities/SyntheticDivision.hpp"
#include "Utilities/NewtonRaphson.hpp"
#include "Utilities/LobattoNodes.hpp"
#include "Utilities/LobattoWeights.hpp"
#include "Utilities/LobattoIntegration.hpp"
#include "Utilities/LagrangePolynomials.hpp"
#include "Utilities/Transpose.hpp"
#include "Utilities/Create.hpp"
#include "Utilities/Plot.hpp"

#include "Elemental/MassMatrix.hpp"
#include "Elemental/DerivativeMatrix.hpp"
#include "Elemental/FluxMatrix.hpp"

#include "Field/Field.hpp"

#include "ShallowWater/ShallowWater.hpp"
