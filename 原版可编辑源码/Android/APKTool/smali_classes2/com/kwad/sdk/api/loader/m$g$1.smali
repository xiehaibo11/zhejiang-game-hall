.class final Lcom/kwad/sdk/api/loader/m$g$1;
.super Lcom/kwad/sdk/api/loader/m$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/api/loader/m$g;->a(Lcom/kwad/sdk/api/loader/v;Lcom/kwad/sdk/api/loader/m$c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/api/loader/m$a<",
        "Lcom/kwad/sdk/api/loader/a$a;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic aiP:Lcom/kwad/sdk/api/loader/m$c;

.field final synthetic aiV:Lcom/kwad/sdk/api/loader/m$g;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/loader/m$g;Lcom/kwad/sdk/api/loader/m$c;Lcom/kwad/sdk/api/loader/m$c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/m$g$1;->aiV:Lcom/kwad/sdk/api/loader/m$g;

    iput-object p3, p0, Lcom/kwad/sdk/api/loader/m$g$1;->aiP:Lcom/kwad/sdk/api/loader/m$c;

    invoke-direct {p0, p2}, Lcom/kwad/sdk/api/loader/m$a;-><init>(Lcom/kwad/sdk/api/loader/m$c;)V

    return-void
.end method

.method private a(Lcom/kwad/sdk/api/loader/a$a;ILjava/lang/Throwable;)V
    .locals 1

    iget-object v0, p1, Lcom/kwad/sdk/api/loader/a$a;->aid:Ljava/io/File;

    invoke-static {v0}, Lcom/kwad/sdk/api/loader/h;->j(Ljava/io/File;)V

    invoke-virtual {p3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p2, p3}, Lcom/kwad/sdk/api/loader/j;->a(Lcom/kwad/sdk/api/loader/a$a;ILjava/lang/String;)V

    return-void
.end method

.method private c(Lcom/kwad/sdk/api/loader/a$a;)V
    .locals 3

    :try_start_0
    iget-object v0, p1, Lcom/kwad/sdk/api/loader/a$a;->aid:Ljava/io/File;

    invoke-static {v0}, Lcom/kwad/sdk/api/loader/r;->k(Ljava/io/File;)Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v0, 0x1

    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "Security checkFileValid fail"

    invoke-direct {v1, v2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/sdk/api/loader/m$g$1;->a(Lcom/kwad/sdk/api/loader/a$a;ILjava/lang/Throwable;)V

    return-void

    :cond_0
    iget-object v1, p1, Lcom/kwad/sdk/api/loader/a$a;->UC:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/kwad/sdk/api/loader/r;->a(Ljava/io/File;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x2

    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "Security checkMd5 fail"

    invoke-direct {v1, v2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/sdk/api/loader/m$g$1;->a(Lcom/kwad/sdk/api/loader/a$a;ILjava/lang/Throwable;)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/api/loader/m$g$1;->aiP:Lcom/kwad/sdk/api/loader/m$c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/loader/m$c;->g(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    const/4 v1, 0x3

    invoke-direct {p0, p1, v1, v0}, Lcom/kwad/sdk/api/loader/m$g$1;->a(Lcom/kwad/sdk/api/loader/a$a;ILjava/lang/Throwable;)V

    return-void
.end method


# virtual methods
.method public final synthetic g(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/api/loader/a$a;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/api/loader/m$g$1;->c(Lcom/kwad/sdk/api/loader/a$a;)V

    return-void
.end method
