//
// This file is part of openBliSSART.
//
// Copyright (c) 2007-2009, Alexander Lehmann <lehmanna@in.tum.de>
//                          Felix Weninger <felix@weninger.de>
//                          Bjoern Schuller <schuller@tum.de>
//
// Institute for Human-Machine Communication
// Technische Universitaet Muenchen (TUM), D-80333 Munich, Germany
//
// openBliSSART is free software: you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation, either version 2 of the License, or (at your option) any later
// version.
//
// openBliSSART is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// openBliSSART.  If not, see <http://www.gnu.org/licenses/>.
//


#ifndef __BLISSART_NMF_RANDOMGENERATOR_H__
#define __BLISSART_NMF_RANDOMGENERATOR_H__


#include <cstdlib>
#include <common.h>


namespace blissart {

namespace nmf {


/**
 * Static helper function for the randomized initialization
 * of matrices.
 * @return              a real value within [0.01, 0.02[
 */
inline double uniformRandomGenerator(unsigned int, unsigned int)
{
    return (1.0 + (double)rand() / (double)RAND_MAX) * 1e-2;
}


double LibNMF_API gaussianRandomGenerator(unsigned int, unsigned int);


} // namespace nmf

} // namespace blissart


#endif // __BLISSART_NMF_RANDOMGENERATOR_H__
