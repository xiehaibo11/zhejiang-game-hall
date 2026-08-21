package org.json.simple.parser;

public interface ContainerFactory {
    java.util.List creatArrayContainer();

    java.util.Map createObjectContainer();
}
