#include "ECS/Component.h"
#include "ECS/Entity.h"

Args::uint32 Args::IComponent::componentTypeCount = 1;

Args::IComponent::IComponent(Entity* entity, uint32 typeId, uint32 externalId) : owner(entity), ownerID(entity->id), typeID(typeId), manager(entity->manager), id(0), externalTypeId(externalId)
{
}