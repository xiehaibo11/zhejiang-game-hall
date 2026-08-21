.class final Lcom/kwad/components/core/webview/b/d/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/d/b;->aS(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic XG:Lcom/kwad/components/core/webview/b/d/b;

.field final synthetic gn:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/d/b;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/d/b$1;->XG:Lcom/kwad/components/core/webview/b/d/b;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/d/b$1;->gn:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/d/b$1;->XG:Lcom/kwad/components/core/webview/b/d/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/d/b$1;->gn:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/d/b;Ljava/lang/String;)V

    return-void
.end method
