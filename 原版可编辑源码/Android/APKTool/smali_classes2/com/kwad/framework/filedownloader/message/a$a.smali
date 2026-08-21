.class public final Lcom/kwad/framework/filedownloader/message/a$a;
.super Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

# interfaces
.implements Lcom/kwad/framework/filedownloader/message/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/message/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private final adH:Lcom/kwad/framework/filedownloader/message/MessageSnapshot;


# direct methods
.method public constructor <init>(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 4

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->getId()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;-><init>(I)V

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result v0

    const/4 v1, -0x3

    if-ne v0, v1, :cond_0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/message/a$a;->adH:Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    return-void

    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->getId()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result p1

    invoke-static {p1}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    aput-object p1, v1, v2

    const-string p1, "can\'t create the block complete message for id[%d], status[%d]"

    invoke-static {p1, v1}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method public final sX()B
    .locals 1

    const/4 v0, 0x4

    return v0
.end method

.method public final uY()Lcom/kwad/framework/filedownloader/message/MessageSnapshot;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/message/a$a;->adH:Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    return-object v0
.end method
