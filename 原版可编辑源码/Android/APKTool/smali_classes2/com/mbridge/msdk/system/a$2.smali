.class final Lcom/mbridge/msdk/system/a$2;
.super Ljava/lang/Object;
.source "MBridgeSDKImpl.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/system/a;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/system/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/system/a;)V
    .locals 0

    .line 262
    iput-object p1, p0, Lcom/mbridge/msdk/system/a$2;->a:Lcom/mbridge/msdk/system/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 265
    iget-object v0, p0, Lcom/mbridge/msdk/system/a$2;->a:Lcom/mbridge/msdk/system/a;

    invoke-static {v0}, Lcom/mbridge/msdk/system/a;->a(Lcom/mbridge/msdk/system/a;)Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 267
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/system/a$2;->a:Lcom/mbridge/msdk/system/a;

    invoke-static {v0}, Lcom/mbridge/msdk/system/a;->a(Lcom/mbridge/msdk/system/a;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "mbridge_download_dialog_view.xml"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->copyViewFile(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 270
    :catch_0
    iget-object v0, p0, Lcom/mbridge/msdk/system/a$2;->a:Lcom/mbridge/msdk/system/a;

    invoke-static {v0}, Lcom/mbridge/msdk/system/a;->a(Lcom/mbridge/msdk/system/a;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/system/a;->a(Lcom/mbridge/msdk/system/a;Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 273
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/system/a$2;->a:Lcom/mbridge/msdk/system/a;

    iget-object v1, p0, Lcom/mbridge/msdk/system/a$2;->a:Lcom/mbridge/msdk/system/a;

    invoke-static {v1}, Lcom/mbridge/msdk/system/a;->a(Lcom/mbridge/msdk/system/a;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/system/a;->b(Lcom/mbridge/msdk/system/a;Landroid/content/Context;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception v0

    .line 275
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 278
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/system/a$2;->a:Lcom/mbridge/msdk/system/a;

    invoke-static {v0}, Lcom/mbridge/msdk/system/a;->a(Lcom/mbridge/msdk/system/a;)Landroid/content/Context;

    move-result-object v1

    const-string v2, "com.alphab.receiver.AlphabReceiver"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/system/a;->a(Lcom/mbridge/msdk/system/a;Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 279
    iget-object v0, p0, Lcom/mbridge/msdk/system/a$2;->a:Lcom/mbridge/msdk/system/a;

    invoke-static {v0}, Lcom/mbridge/msdk/system/a;->a(Lcom/mbridge/msdk/system/a;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/system/a;->c(Lcom/mbridge/msdk/system/a;Landroid/content/Context;)V

    :cond_0
    return-void
.end method
