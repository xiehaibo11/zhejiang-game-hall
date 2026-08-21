.class public final Lcom/kwad/sdk/core/download/a$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/download/a$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/download/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field final anC:Ljava/io/OutputStream;


# direct methods
.method public constructor <init>(Ljava/io/File;Z)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/io/FileOutputStream;

    invoke-direct {v0, p1, p2}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V

    iput-object v0, p0, Lcom/kwad/sdk/core/download/a$a;->anC:Ljava/io/OutputStream;

    return-void
.end method


# virtual methods
.method public final close()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/a$a;->anC:Ljava/io/OutputStream;

    invoke-virtual {v0}, Ljava/io/OutputStream;->close()V

    return-void
.end method

.method public final write([BII)V
    .locals 1

    iget-object p2, p0, Lcom/kwad/sdk/core/download/a$a;->anC:Ljava/io/OutputStream;

    const/4 v0, 0x0

    invoke-virtual {p2, p1, v0, p3}, Ljava/io/OutputStream;->write([BII)V

    return-void
.end method
