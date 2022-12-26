#ifndef ANIMATIONWALLET_H
#define ANIMATIONWALLET_H

#include <string>
#include <vector>
#include "Animation.hpp"

class AnimationWallet
{
    public:
        int animations_number = 0;
        std::vector<Animation*> animations;

    private:

    public:
        AnimationWallet();
        ~AnimationWallet();
        void add_animation(std::string anim_folder);
};

#endif