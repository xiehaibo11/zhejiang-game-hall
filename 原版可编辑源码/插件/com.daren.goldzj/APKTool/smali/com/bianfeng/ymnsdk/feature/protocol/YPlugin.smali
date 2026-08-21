.class public interface abstract annotation Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
.super Ljava/lang/Object;
.source "YPlugin.java"

# interfaces
.implements Ljava/lang/annotation/Annotation;


# annotations
.annotation system Ldalvik/annotation/AnnotationDefault;
    value = .subannotation Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
        entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->CONTEXT:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
        strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->LAZY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
    .end subannotation
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;,
        Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
    }
.end annotation

.annotation runtime Ljava/lang/annotation/Retention;
    value = .enum Ljava/lang/annotation/RetentionPolicy;->RUNTIME:Ljava/lang/annotation/RetentionPolicy;
.end annotation

.annotation runtime Ljava/lang/annotation/Target;
    value = {
        .enum Ljava/lang/annotation/ElementType;->TYPE:Ljava/lang/annotation/ElementType;
    }
.end annotation


# virtual methods
.method public abstract entrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
.end method

.method public abstract strategy()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end method
