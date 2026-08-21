.class interface abstract Lcom/bianfeng/afext/write/PayloadWriter$ApkSigningBlockHandler;
.super Ljava/lang/Object;
.source "PayloadWriter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/afext/write/PayloadWriter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x608
    name = "ApkSigningBlockHandler"
.end annotation


# virtual methods
.method public abstract handle(Ljava/util/Map;)Lcom/bianfeng/afext/write/ApkSigningBlock;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/nio/ByteBuffer;",
            ">;)",
            "Lcom/bianfeng/afext/write/ApkSigningBlock;"
        }
    .end annotation
.end method
