.class final Lcom/kwad/sdk/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/services/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/c;->init(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic agQ:Lcom/kwad/sdk/c;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/c$1;->agQ:Lcom/kwad/sdk/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final uv()Lcom/kwad/framework/filedownloader/f/c$b;
    .locals 2

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/k$a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/k$a;-><init>(Z)V

    const-string v1, ""

    invoke-interface {v0, v1}, Lcom/kwad/framework/filedownloader/f/c$b;->aZ(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method
