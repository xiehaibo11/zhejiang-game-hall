.class public interface abstract annotation Lcom/czhj/wire/WireField;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/annotation/Annotation;


# annotations
.annotation system Ldalvik/annotation/AnnotationDefault;
    value = .subannotation Lcom/czhj/wire/WireField;
        keyAdapter = ""
        label = .enum Lcom/czhj/wire/WireField$Label;->OPTIONAL:Lcom/czhj/wire/WireField$Label;
        redacted = false
    .end subannotation
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/WireField$Label;
    }
.end annotation

.annotation runtime Ljava/lang/annotation/Retention;
    value = .enum Ljava/lang/annotation/RetentionPolicy;->RUNTIME:Ljava/lang/annotation/RetentionPolicy;
.end annotation

.annotation runtime Ljava/lang/annotation/Target;
    value = {
        .enum Ljava/lang/annotation/ElementType;->FIELD:Ljava/lang/annotation/ElementType;
    }
.end annotation


# virtual methods
.method public abstract adapter()Ljava/lang/String;
.end method

.method public abstract keyAdapter()Ljava/lang/String;
.end method

.method public abstract label()Lcom/czhj/wire/WireField$Label;
.end method

.method public abstract redacted()Z
.end method

.method public abstract tag()I
.end method
