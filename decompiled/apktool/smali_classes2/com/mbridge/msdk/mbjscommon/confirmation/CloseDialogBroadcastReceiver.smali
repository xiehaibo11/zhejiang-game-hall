.class public Lcom/mbridge/msdk/mbjscommon/confirmation/CloseDialogBroadcastReceiver;
.super Landroid/content/BroadcastReceiver;
.source "CloseDialogBroadcastReceiver.java"


# instance fields
.field private a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    .line 16
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/CloseDialogBroadcastReceiver;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2

    const-string v0, "CloseDialogBroadcastReceiver"

    if-eqz p2, :cond_2

    .line 22
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p2

    .line 23
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "mb_dp_close_broadcast_receiver"

    invoke-static {p2, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 24
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/CloseDialogBroadcastReceiver;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    if-eqz p2, :cond_2

    .line 26
    :try_start_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->isShowing()Z

    move-result p2

    if-eqz p2, :cond_0

    .line 27
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/CloseDialogBroadcastReceiver;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    const/4 v1, 0x0

    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->setRenderListener(Lcom/mbridge/msdk/widget/custom/a;)V

    .line 28
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/CloseDialogBroadcastReceiver;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-virtual {p2}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->cancel()V

    .line 29
    iput-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/CloseDialogBroadcastReceiver;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    if-eqz p1, :cond_2

    .line 36
    :try_start_1
    invoke-virtual {p1, p0}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 38
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :catchall_0
    move-exception p2

    goto :goto_0

    :catch_1
    move-exception p2

    .line 32
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz p1, :cond_2

    .line 36
    :try_start_3
    invoke-virtual {p1, p0}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_2

    :goto_0
    if-eqz p1, :cond_1

    :try_start_4
    invoke-virtual {p1, p0}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_1

    :catch_2
    move-exception p1

    .line 38
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 41
    :cond_1
    :goto_1
    throw p2

    :cond_2
    :goto_2
    return-void
.end method
