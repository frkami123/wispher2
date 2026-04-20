#pragma once

#include <onyx/engine/enginesystem.h>

namespace wispher2
{
    class GameSystem : public Onyx::IEngineSystem
    {
    public:
        static constexpr Onyx::StringId32 TypeId = "wispher2::GameSystem";
        Onyx::StringId32 GetTypeId() const override { return TypeId; }

        void Init();
    };
}
