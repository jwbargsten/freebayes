#ifndef __MARGINALS_H
#define __MARGINALS_H
#include <vector>
#include <map>
#include "Genotype.h"
#include "ResultData.h"

void marginalGenotypeLikelihoods(long double posteriorNormalizer, vector<GenotypeCombo>& genotypeCombos, Results& results);

#endif
