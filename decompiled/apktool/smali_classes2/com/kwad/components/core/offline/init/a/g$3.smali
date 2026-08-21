.class final Lcom/kwad/components/core/offline/init/a/g$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/IDownloader;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/offline/init/a/g;->downloader()Lcom/kwad/components/offline/api/core/api/IDownloader;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic LR:Lcom/kwad/components/core/offline/init/a/g;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/offline/init/a/g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/a/g$3;->LR:Lcom/kwad/components/core/offline/init/a/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final downloadSync(Ljava/io/File;Ljava/lang/String;)Z
    .locals 0

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/download/a;->c(Ljava/lang/String;Ljava/io/File;)Z

    move-result p1

    return p1
.end method
