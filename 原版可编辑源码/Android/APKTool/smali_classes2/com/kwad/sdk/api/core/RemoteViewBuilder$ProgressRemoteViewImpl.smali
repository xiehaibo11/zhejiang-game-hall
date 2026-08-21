.class Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/core/IProgressRemoteView;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/api/core/RemoteViewBuilder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "ProgressRemoteViewImpl"
.end annotation


# static fields
.field private static final ACTION_CLICK_CONTROL_BTN:Ljava/lang/String; = "com.ksad.action.ACTION_NOTIFICATION_CLICK_CONTROL_BTN"

.field private static final KEY_TASKID:Ljava/lang/String; = "taskId"


# instance fields
.field private btnControlId:I

.field private btnTextColorChecked:I

.field private btnTextColorUnchecked:I

.field private downloadTaskId:I

.field private final mContext:Landroid/content/Context;

.field private final mOriginContext:Landroid/content/Context;

.field private final mRemoteViews:Landroid/widget/RemoteViews;


# direct methods
.method private constructor <init>(Landroid/content/Context;IZ)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->btnControlId:I

    const-string v0, "#FFFFFFFF"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->btnTextColorChecked:I

    const-string v0, "#FF222222"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->btnTextColorUnchecked:I

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->downloadTaskId:I

    iput-object p1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mContext:Landroid/content/Context;

    iput p2, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->downloadTaskId:I

    instance-of p2, p1, Lcom/kwad/sdk/api/core/ResContext;

    if-eqz p2, :cond_0

    check-cast p1, Lcom/kwad/sdk/api/core/ResContext;

    invoke-interface {p1}, Lcom/kwad/sdk/api/core/ResContext;->getDelegatedContext()Landroid/content/Context;

    move-result-object p1

    :cond_0
    iput-object p1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    if-eqz p3, :cond_1

    const-string p1, "ksad_notification_download_progress_with_control"

    goto :goto_0

    :cond_1
    const-string p1, "ksad_notification_download_progress_without_control"

    :goto_0
    new-instance p2, Landroid/widget/RemoteViews;

    iget-object p3, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    invoke-virtual {p3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p3

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    invoke-static {v1, p1}, Lcom/kwad/sdk/api/core/ResUtil;->getLayoutId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-direct {p2, p3, p1}, Landroid/widget/RemoteViews;-><init>(Ljava/lang/String;I)V

    iput-object p2, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget-object p1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string p2, "ksad_download_control_btn"

    invoke-static {p1, p2}, Lcom/kwad/sdk/api/core/ResUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->btnControlId:I

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->initViews()V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->setControlBtnPaused(Z)V

    return-void
.end method

.method synthetic constructor <init>(Landroid/content/Context;IZLcom/kwad/sdk/api/core/RemoteViewBuilder$1;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;-><init>(Landroid/content/Context;IZ)V

    return-void
.end method

.method private initViews()V
    .locals 4

    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.ksad.action.ACTION_NOTIFICATION_CLICK_CONTROL_BTN"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->downloadTaskId:I

    const-string v2, "taskId"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mContext:Landroid/content/Context;

    iget v2, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->downloadTaskId:I

    const/4 v3, 0x0

    invoke-static {v1, v2, v0, v3}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget v2, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->btnControlId:I

    invoke-virtual {v1, v2, v0}, Landroid/widget/RemoteViews;->setOnClickPendingIntent(ILandroid/app/PendingIntent;)V

    return-void
.end method


# virtual methods
.method public build()Landroid/widget/RemoteViews;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    return-object v0
.end method

.method public setControlBtnPaused(Z)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    const-string v0, "\u7ee7\u7eed"

    goto :goto_0

    :cond_1
    const-string v0, "\u6682\u505c"

    :goto_0
    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget v2, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->btnControlId:I

    invoke-virtual {v1, v2, v0}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    if-eqz p1, :cond_2

    iget v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->btnTextColorChecked:I

    goto :goto_1

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->btnTextColorUnchecked:I

    :goto_1
    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget v2, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->btnControlId:I

    invoke-virtual {v1, v2, v0}, Landroid/widget/RemoteViews;->setTextColor(II)V

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string v0, "ksad_notification_control_btn_bg_checked"

    goto :goto_2

    :cond_3
    iget-object p1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string v0, "ksad_notification_control_btn_bg_unchecked"

    :goto_2
    invoke-static {p1, v0}, Lcom/kwad/sdk/api/core/ResUtil;->getDrawableId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string v2, "ksad_download_control_bg_image"

    invoke-static {v1, v2}, Lcom/kwad/sdk/api/core/ResUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setImageViewResource(II)V

    return-void
.end method

.method public setIcon(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mContext:Landroid/content/Context;

    invoke-static {v0, p1}, Lcom/kwad/sdk/api/core/RemoteViewBuilder;->access$000(Landroid/content/Context;I)Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->setIcon(Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public setIcon(Landroid/graphics/Bitmap;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string v2, "ksad_download_icon"

    invoke-static {v1, v2}, Lcom/kwad/sdk/api/core/ResUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setImageViewBitmap(ILandroid/graphics/Bitmap;)V

    return-void
.end method

.method public setName(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string v2, "ksad_download_name"

    invoke-static {v1, v2}, Lcom/kwad/sdk/api/core/ResUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    return-void
.end method

.method public setPercentNum(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string v2, "ksad_download_percent_num"

    invoke-static {v1, v2}, Lcom/kwad/sdk/api/core/ResUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    return-void
.end method

.method public setProgress(IIZ)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string v2, "ksad_download_progress"

    invoke-static {v1, v2}, Lcom/kwad/sdk/api/core/ResUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1, p2, p3}, Landroid/widget/RemoteViews;->setProgressBar(IIIZ)V

    return-void
.end method

.method public setSize(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string v2, "ksad_download_size"

    invoke-static {v1, v2}, Lcom/kwad/sdk/api/core/ResUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    return-void
.end method

.method public setStatus(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mRemoteViews:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/RemoteViewBuilder$ProgressRemoteViewImpl;->mOriginContext:Landroid/content/Context;

    const-string v2, "ksad_download_status"

    invoke-static {v1, v2}, Lcom/kwad/sdk/api/core/ResUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    return-void
.end method
