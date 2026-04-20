#pragma once

#include <onyx/engine/enginesystem.h>

namespace @PROJECT_NAME@
{
    class GameSystem : public Onyx::IEngineSystem
    {
    public:
        static constexpr Onyx::StringId32 TypeId = "@PROJECT_NAME@::GameSystem";
        Onyx::StringId32 GetTypeId() const override { return TypeId; }

        void Init();
    };
}
