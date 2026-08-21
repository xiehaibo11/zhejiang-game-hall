.class public interface abstract annotation Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
.super Ljava/lang/Object;
.source "YFunction.java"

# interfaces
.implements Ljava/lang/annotation/Annotation;


# annotations
.annotation system Ldalvik/annotation/AnnotationDefault;
    value = .subannotation Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = ""
    .end subannotation
.end annotation

.annotation runtime Ljava/lang/annotation/Retention;
    value = .enum Ljava/lang/annotation/RetentionPolicy;->RUNTIME:Ljava/lang/annotation/RetentionPolicy;
.end annotation

.annotation runtime Ljava/lang/annotation/Target;
    value = {
        .enum Ljava/lang/annotation/ElementType;->METHOD:Ljava/lang/annotation/ElementType;
    }
.end annotation


# virtual methods
.method public abstract alias()Ljava/lang/String;
.end method

.method public abstract name()Ljava/lang/String;
.end method
