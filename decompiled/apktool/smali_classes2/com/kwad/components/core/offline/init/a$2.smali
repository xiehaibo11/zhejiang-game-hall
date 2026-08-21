.class final Lcom/kwad/components/core/offline/init/a$2;
.super Lcom/kwad/library/solder/lib/ext/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/offline/init/a;->ag(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Lr:Lcom/kwad/components/core/offline/init/a;

.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/offline/init/a;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/a$2;->Lr:Lcom/kwad/components/core/offline/init/a;

    iput-object p2, p0, Lcom/kwad/components/core/offline/init/a$2;->jz:Landroid/content/Context;

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/ext/b$a;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/b/a;Lcom/kwad/library/b/a;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/library/solder/lib/ext/b$a;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/a$2;->Lr:Lcom/kwad/components/core/offline/init/a;

    invoke-virtual {p1}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object p1

    if-nez p2, :cond_0

    const-string p2, "loadComponents failed plugin null"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    const-string v0, "loadComponents success"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/a$2;->Lr:Lcom/kwad/components/core/offline/init/a;

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a$2;->jz:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/kwad/library/b/a;->vV()Lcom/kwad/library/b/a/b;

    move-result-object p2

    invoke-static {p1, v0, p2}, Lcom/kwad/components/core/offline/init/a;->a(Lcom/kwad/components/core/offline/init/a;Landroid/content/Context;Ljava/lang/ClassLoader;)V

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/b/a;Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/library/solder/lib/ext/b$a;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/a$2;->Lr:Lcom/kwad/components/core/offline/init/a;

    invoke-virtual {p1}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "loadComponents failed error: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/a;

    check-cast p2, Lcom/kwad/library/b/a;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/offline/init/a$2;->a(Lcom/kwad/library/solder/lib/b/a;Lcom/kwad/library/b/a;)V

    return-void
.end method

.method public final bridge synthetic a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/a;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/offline/init/a$2;->a(Lcom/kwad/library/solder/lib/b/a;Lcom/kwad/library/solder/lib/ext/PluginError;)V

    return-void
.end method
