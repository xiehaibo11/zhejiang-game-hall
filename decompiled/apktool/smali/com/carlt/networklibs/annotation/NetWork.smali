.class public interface abstract annotation Lcom/carlt/networklibs/annotation/NetWork;
.super Ljava/lang/Object;
.source "NetWork.java"

# interfaces
.implements Ljava/lang/annotation/Annotation;


# annotations
.annotation system Ldalvik/annotation/AnnotationDefault;
    value = .subannotation Lcom/carlt/networklibs/annotation/NetWork;
        netType = .enum Lcom/carlt/networklibs/NetType;->AUTO:Lcom/carlt/networklibs/NetType;
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
.method public abstract netType()Lcom/carlt/networklibs/NetType;
.end method
