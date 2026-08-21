.class final Lcom/kwad/sdk/core/webview/b/a$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/webview/b/a;->bp(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/c<",
        "Lcom/kwad/sdk/h/a/b;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic ayD:Lcom/kwad/sdk/core/webview/b/a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/webview/b/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/b/a$6;->ayD:Lcom/kwad/sdk/core/webview/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static Ei()Lcom/kwad/sdk/h/a/b;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/h/a/b;

    invoke-direct {v0}, Lcom/kwad/sdk/h/a/b;-><init>()V

    return-object v0
.end method


# virtual methods
.method public final synthetic yV()Lcom/kwad/sdk/core/b;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/webview/b/a$6;->Ei()Lcom/kwad/sdk/h/a/b;

    move-result-object v0

    return-object v0
.end method
