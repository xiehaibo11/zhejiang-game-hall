.class final Lcom/kwad/components/core/webview/b/d/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/b/d/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final XE:Lcom/kwad/components/core/webview/b/d/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b/d/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/b/d/a;-><init>(B)V

    sput-object v0, Lcom/kwad/components/core/webview/b/d/a$a;->XE:Lcom/kwad/components/core/webview/b/d/a;

    return-void
.end method

.method static synthetic se()Lcom/kwad/components/core/webview/b/d/a;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/webview/b/d/a$a;->XE:Lcom/kwad/components/core/webview/b/d/a;

    return-object v0
.end method
