#include "antsRegistrationTemplateHeader.h"

namespace ants{
const char *
RegTypeToFileName(const std::string & type, bool & writeInverse, bool & writeVelocityField)
{
  std::string str(type);

  ConvertToLowerCase(str);
  if( str == "syn" ||
      str == "symmetricnormalization" ||
      str == "bsplinesyn" ||
      str == "timevaryingbsplinevelocityfield" ||
      str == "tvdmffd" ||
      str == "timevaryingvelocityfield" ||
      str == "tvf"  ||
      str == "exponential" ||
      str == "bsplineexponential" )
    {
    writeInverse = true;
    }
  else
    {
    writeInverse = false;
    }

  if( str == "timevaryingvelocityfield" ||
      str == "tvf" )
    {
    writeVelocityField = true;
    }
  else
    {
    writeVelocityField = false;
    }

  if( str == "rigid" )
    {
    return "Rigid.xfm";
    }
  else if( str == "affine" ||
           str == "compositeaffine" || str == "compaff" )
    {
    return "Affine.xfm";
    }
  else if( str == "similarity" )
    {
    return "Similarity.xfm";
    }
  else if( str == "translation" )
    {
    return "Translation.xfm";
    }
  else if( str == "bspline" ||
           str == "ffd" )
    {
    return "BSpline.txt";
    }
  else if( str == "genericaffine" )
    {
    return "GenericAffine.xfm";
    }
  else if( str == "gaussiandisplacementfield" ||
           str == "gdf" ||
           str == "bsplinedisplacementfield" ||
           str == "dmffd" ||
           str == "syn" ||
           str == "symmetricnormalization" ||
           str == "bsplinesyn" ||
           str == "timevaryingvelocityfield" ||
           str == "tvf" ||
           str == "timevaryingbsplinevelocityfield" ||
           str == "tvdmffd" ||
           str == "exp" ||
           str == "exponential" ||
           str == "bsplineexponential" )
    {
    return "Warp_grid_0.mnc";
    }
  return "BOGUS.XXXX";
}
}// end namespace ants
