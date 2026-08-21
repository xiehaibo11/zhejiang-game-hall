.class final Lcom/kwad/sdk/utils/bp$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/utils/bp;->a(Landroid/webkit/WebView;Ljava/lang/String;Landroid/webkit/ValueCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aKv:Landroid/webkit/WebView;

.field final synthetic aKw:Ljava/lang/String;

.field final synthetic aKx:Landroid/webkit/ValueCallback;


# direct methods
.method constructor <init>(Landroid/webkit/WebView;Ljava/lang/String;Landroid/webkit/ValueCallback;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/utils/bp$1;->aKv:Landroid/webkit/WebView;

    iput-object p2, p0, Lcom/kwad/sdk/utils/bp$1;->aKw:Ljava/lang/String;

    iput-object p3, p0, Lcom/kwad/sdk/utils/bp$1;->aKx:Landroid/webkit/ValueCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/utils/bp$1;->aKv:Landroid/webkit/WebView;

    iget-object v1, p0, Lcom/kwad/sdk/utils/bp$1;->aKw:Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/sdk/utils/bp$1;->aKx:Landroid/webkit/ValueCallback;

    invoke-virtual {v0, v1, v2}, Landroid/webkit/WebView;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method
