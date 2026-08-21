.class final Lcom/kwad/components/core/offline/init/a/l;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/IZipper;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final unZip(Ljava/io/InputStream;Ljava/lang/String;)Z
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/br;->unZip(Ljava/io/InputStream;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public final zip(Ljava/io/File;Ljava/io/File;)Z
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/br;->zip(Ljava/io/File;Ljava/io/File;)Z

    move-result p1

    return p1
.end method

.method public final zipFile(Ljava/io/File;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/br;->zipFile(Ljava/io/File;)V

    return-void
.end method
