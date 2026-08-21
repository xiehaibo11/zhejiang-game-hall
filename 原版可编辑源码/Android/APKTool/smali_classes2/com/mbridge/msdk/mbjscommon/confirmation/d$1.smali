.class final Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;
.super Ljava/lang/Object;
.source "NativeProgressController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/mbridge/msdk/mbjscommon/confirmation/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/confirmation/d;I)V
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;->b:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    iput p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 60
    iget v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;->a:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_3

    const/4 v1, 0x2

    const-string v2, "string"

    if-eq v0, v1, :cond_2

    const/4 v1, 0x3

    const/16 v3, 0x64

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    .line 63
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;->b:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)V

    goto/16 :goto_0

    .line 75
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;->b:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    .line 3142
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    if-eqz v1, :cond_4

    .line 3143
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setProgress(I)V

    .line 3145
    :try_start_0
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

    move-result-object v1

    .line 3146
    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const-string v4, "mbridge_cm_progress_status_descri_open"

    invoke-static {v1, v4, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v3, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 3148
    iget-object v0, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setText(Ljava/lang/CharSequence;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3150
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    .line 72
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;->b:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    .line 2128
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    if-eqz v1, :cond_4

    .line 2129
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setProgress(I)V

    .line 2131
    :try_start_1
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

    move-result-object v1

    .line 2132
    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const-string v4, "mbridge_cm_progress_status_descri_ins"

    invoke-static {v1, v4, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v3, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 2134
    iget-object v0, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setText(Ljava/lang/CharSequence;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception v0

    .line 2136
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    .line 69
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;->b:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    .line 1122
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    if-eqz v1, :cond_4

    .line 1123
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    iget-object v0, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "mbridge_cm_progress_status_descri_pause"

    invoke-static {v0, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setText(I)V

    goto :goto_0

    .line 66
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;->b:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)V

    :cond_4
    :goto_0
    return-void
.end method
