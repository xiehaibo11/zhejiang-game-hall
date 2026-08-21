.class final Lcom/kwad/components/core/e/a/e$1$1;
.super Lcom/kwad/components/ad/b/a/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/e/a/e$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ja:Lcom/kwad/components/ad/b/a/a;

.field final synthetic Jb:Lcom/kwad/components/core/e/a/e$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/e/a/e$1;Lcom/kwad/components/ad/b/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/a/e$1$1;->Jb:Lcom/kwad/components/core/e/a/e$1;

    iput-object p2, p0, Lcom/kwad/components/core/e/a/e$1$1;->Ja:Lcom/kwad/components/ad/b/a/a;

    invoke-direct {p0}, Lcom/kwad/components/ad/b/a/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final U()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e$1$1;->Ja:Lcom/kwad/components/ad/b/a/a;

    invoke-interface {v0, p0}, Lcom/kwad/components/ad/b/a/a;->b(Lcom/kwad/components/ad/b/a/b;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e$1$1;->Jb:Lcom/kwad/components/core/e/a/e$1;

    invoke-static {v0}, Lcom/kwad/components/core/e/a/e$1;->a(Lcom/kwad/components/core/e/a/e$1;)V

    const-string v0, "InstalledActivateManager"

    const-string v1, "startShow onPushAdClose"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
