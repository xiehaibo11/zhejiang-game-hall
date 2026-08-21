.class public final Lcom/mbridge/msdk/widget/custom/a/d;
.super Ljava/lang/Object;
.source "RenderEngine.java"


# instance fields
.field private a:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

.field private b:Lcom/mbridge/msdk/widget/custom/a;

.field private c:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

.field private d:I

.field private e:I

.field private f:Landroid/widget/ImageView;

.field private g:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

.field private h:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

.field private i:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a;Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;II)V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 33
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d;->a:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    .line 34
    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/a/d;->b:Lcom/mbridge/msdk/widget/custom/a;

    .line 35
    iput-object p3, p0, Lcom/mbridge/msdk/widget/custom/a/d;->c:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    .line 36
    iput p4, p0, Lcom/mbridge/msdk/widget/custom/a/d;->d:I

    .line 37
    iput p5, p0, Lcom/mbridge/msdk/widget/custom/a/d;->e:I

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/custom/a/d;)Landroid/widget/ImageView;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/a/d;->f:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/a/d;->i:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/a/d;->a:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/a/d;->c:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/a;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/a/d;->b:Lcom/mbridge/msdk/widget/custom/a;

    return-object p0
.end method


# virtual methods
.method public final a()Lcom/mbridge/msdk/widget/custom/baseview/MBButton;
    .locals 1

    .line 217
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/d;->h:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    return-object v0
.end method

.method public final a(Landroid/view/ViewGroup;)V
    .locals 17

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    .line 41
    instance-of v0, v2, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;

    const/4 v3, 0x0

    if-eqz v0, :cond_1

    invoke-virtual/range {p1 .. p1}, Landroid/view/ViewGroup;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    const-string v4, "getStarCount"

    invoke-virtual {v0, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 42
    move-object v0, v2

    check-cast v0, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;

    .line 44
    iget-object v4, v1, Lcom/mbridge/msdk/widget/custom/a/d;->a:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    if-eqz v4, :cond_0

    .line 45
    invoke-virtual {v4}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getStarCount()I

    move-result v4

    goto :goto_0

    :cond_0
    move v4, v3

    .line 47
    :goto_0
    invoke-static {v4, v3}, Ljava/lang/Math;->max(II)I

    move-result v4

    const/4 v5, 0x5

    invoke-static {v4, v5}, Ljava/lang/Math;->min(II)I

    move-result v4

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->setRating(I)V

    :cond_1
    move v4, v3

    .line 49
    :goto_1
    invoke-virtual/range {p1 .. p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v0

    if-ge v4, v0, :cond_15

    .line 50
    invoke-virtual {v2, v4}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v5

    .line 51
    invoke-virtual {v5}, Landroid/view/View;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v6, "getApplicationPrivacy"

    const-string v7, "close"

    const/16 v8, 0x8

    const/4 v9, 0x1

    if-nez v0, :cond_9

    .line 52
    invoke-virtual {v5}, Landroid/view/View;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    move-object v10, v0

    check-cast v10, Ljava/lang/String;

    const-string v0, "#"

    .line 53
    invoke-virtual {v10, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 54
    array-length v11, v0

    if-le v11, v9, :cond_7

    .line 55
    aget-object v11, v0, v3

    .line 56
    aget-object v0, v0, v9

    .line 57
    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/b/e;->a(Ljava/lang/String;)Z

    move-result v12

    if-eqz v12, :cond_7

    .line 58
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-eq v0, v9, :cond_5

    const/4 v11, 0x2

    if-eq v0, v11, :cond_2

    goto :goto_4

    :cond_2
    add-int/lit8 v0, v4, 0x1

    .line 64
    :try_start_0
    invoke-virtual {v2, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    const/4 v11, 0x0

    .line 66
    move-object v12, v5

    check-cast v12, Landroid/view/ViewGroup;

    move v13, v3

    .line 67
    :goto_2
    invoke-virtual {v12}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v14

    if-ge v13, v14, :cond_4

    .line 68
    invoke-virtual {v12, v13}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v14

    instance-of v14, v14, Landroid/widget/ImageView;

    if-eqz v14, :cond_3

    .line 69
    invoke-virtual {v12, v13}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Landroid/widget/ImageView;

    :cond_3
    add-int/lit8 v13, v13, 0x1

    goto :goto_2

    .line 73
    :cond_4
    new-instance v12, Lcom/mbridge/msdk/widget/custom/a/d$1;

    invoke-direct {v12, v1, v0, v11}, Lcom/mbridge/msdk/widget/custom/a/d$1;-><init>(Lcom/mbridge/msdk/widget/custom/a/d;Landroid/view/View;Landroid/widget/ImageView;)V

    invoke-virtual {v5, v12}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception v0

    .line 81
    sget-boolean v11, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v11, :cond_7

    .line 82
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_4

    .line 60
    :cond_5
    iget-object v0, v1, Lcom/mbridge/msdk/widget/custom/a/d;->a:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-static {v0, v11}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getMessage(Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    move v0, v8

    goto :goto_3

    :cond_6
    move v0, v3

    :goto_3
    invoke-virtual {v5, v0}, Landroid/view/View;->setVisibility(I)V

    .line 91
    :cond_7
    :goto_4
    invoke-virtual {v10, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 92
    new-instance v0, Lcom/mbridge/msdk/widget/custom/a/d$2;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/widget/custom/a/d$2;-><init>(Lcom/mbridge/msdk/widget/custom/a/d;)V

    invoke-virtual {v5, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 102
    :cond_8
    invoke-virtual {v10, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 1115
    new-instance v0, Lcom/mbridge/msdk/widget/custom/a/d$3;

    invoke-direct {v0, v1, v5}, Lcom/mbridge/msdk/widget/custom/a/d$3;-><init>(Lcom/mbridge/msdk/widget/custom/a/d;Landroid/view/View;)V

    invoke-virtual {v5, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 106
    :cond_9
    instance-of v0, v5, Landroid/view/ViewGroup;

    if-eqz v0, :cond_a

    .line 107
    check-cast v5, Landroid/view/ViewGroup;

    invoke-virtual {v1, v5}, Lcom/mbridge/msdk/widget/custom/a/d;->a(Landroid/view/ViewGroup;)V

    goto/16 :goto_5

    .line 1135
    :cond_a
    instance-of v0, v5, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;

    if-eqz v0, :cond_b

    .line 1136
    check-cast v5, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;

    .line 1137
    invoke-virtual {v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    .line 1138
    iget-object v6, v1, Lcom/mbridge/msdk/widget/custom/a/d;->a:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v6, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getMessage(Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1139
    invoke-virtual {v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->getText()Ljava/lang/CharSequence;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_14

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_14

    .line 1140
    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_5

    .line 1142
    :cond_b
    instance-of v0, v5, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    const-string v10, "drawable"

    if-eqz v0, :cond_13

    .line 1143
    move-object v11, v5

    check-cast v11, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    .line 1144
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_14

    .line 1145
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    const-string v5, "imgbg"

    invoke-virtual {v0, v5}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v5, "getApplicationImage"

    if-eqz v0, :cond_c

    .line 1147
    iput-object v11, v1, Lcom/mbridge/msdk/widget/custom/a/d;->g:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    .line 1148
    iget-object v0, v1, Lcom/mbridge/msdk/widget/custom/a/d;->a:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-static {v0, v5}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getMessage(Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_14

    .line 1149
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    const-string v6, "20dp"

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    sub-int/2addr v0, v5

    int-to-float v5, v0

    const v6, 0x3f05c28f    # 0.5225f

    mul-float/2addr v5, v6

    float-to-int v5, v5

    .line 1151
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v6

    .line 1152
    iput v0, v6, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 1153
    iput v5, v6, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 1154
    invoke-virtual {v11, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto/16 :goto_5

    .line 1156
    :cond_c
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-virtual {v0, v5}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_e

    .line 1157
    iget-object v0, v1, Lcom/mbridge/msdk/widget/custom/a/d;->a:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getMessage(Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    .line 1158
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_d

    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 1159
    invoke-virtual {v11, v8}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setVisibility(I)V

    .line 1160
    iget-object v0, v1, Lcom/mbridge/msdk/widget/custom/a/d;->g:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    if-eqz v0, :cond_14

    .line 1161
    invoke-virtual {v0, v8}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setVisibility(I)V

    goto/16 :goto_5

    .line 1164
    :cond_d
    iget-object v12, v1, Lcom/mbridge/msdk/widget/custom/a/d;->g:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    iget v14, v1, Lcom/mbridge/msdk/widget/custom/a/d;->d:I

    iget v15, v1, Lcom/mbridge/msdk/widget/custom/a/d;->e:I

    iget-object v0, v1, Lcom/mbridge/msdk/widget/custom/a/d;->c:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    move-object/from16 v16, v0

    invoke-static/range {v11 .. v16}, Lcom/mbridge/msdk/widget/custom/b/b;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;Landroid/widget/ImageView;Ljava/lang/String;IILcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)V

    goto/16 :goto_5

    .line 1166
    :cond_e
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    const-string v5, "getApplicationLogo"

    invoke-virtual {v0, v5}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_10

    .line 1167
    iget-object v0, v1, Lcom/mbridge/msdk/widget/custom/a/d;->a:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getMessage(Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1168
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_f

    .line 1169
    invoke-static {v11, v0}, Lcom/mbridge/msdk/widget/custom/b/b;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;Ljava/lang/String;)V

    goto/16 :goto_5

    :cond_f
    const-string v0, "#e6e6e6"

    .line 1171
    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setBackgroundColor(I)V

    goto/16 :goto_5

    .line 1173
    :cond_10
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-virtual {v0, v7}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_11

    .line 1175
    iput-object v11, v1, Lcom/mbridge/msdk/widget/custom/a/d;->i:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    .line 1176
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v5, "mbridge_download_message_dialog_close"

    invoke-static {v0, v5, v10}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setImageResource(I)V

    goto/16 :goto_5

    .line 1177
    :cond_11
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    const-string v5, "permissionexpand"

    invoke-virtual {v0, v5}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v5, "mbridge_download_message_dialog_expand"

    if-eqz v0, :cond_12

    .line 1179
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v5, v10}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setImageResource(I)V

    .line 1180
    iput-object v11, v1, Lcom/mbridge/msdk/widget/custom/a/d;->f:Landroid/widget/ImageView;

    goto :goto_5

    .line 1181
    :cond_12
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-virtual {v0, v6}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_14

    .line 1183
    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v5, v10}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setImageResource(I)V

    .line 1184
    new-instance v0, Lcom/mbridge/msdk/widget/custom/a/d$4;

    invoke-direct {v0, v1, v11}, Lcom/mbridge/msdk/widget/custom/a/d$4;-><init>(Lcom/mbridge/msdk/widget/custom/a/d;Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;)V

    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_5

    .line 1195
    :cond_13
    instance-of v0, v5, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    if-eqz v0, :cond_14

    .line 1196
    check-cast v5, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    .line 1197
    invoke-virtual {v5, v9}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setIndeterminateProgressMode(Z)V

    .line 1198
    invoke-virtual {v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v6, "mbridge_download_message_dialog_button_shape"

    invoke-static {v0, v6, v10}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setBackgroundResource(I)V

    .line 1199
    invoke-virtual {v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_14

    .line 1200
    invoke-virtual {v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v6, "download"

    invoke-virtual {v0, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_14

    .line 1201
    iput-object v5, v1, Lcom/mbridge/msdk/widget/custom/a/d;->h:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    .line 1202
    new-instance v0, Lcom/mbridge/msdk/widget/custom/a/d$5;

    invoke-direct {v0, v1, v5}, Lcom/mbridge/msdk/widget/custom/a/d$5;-><init>(Lcom/mbridge/msdk/widget/custom/a/d;Lcom/mbridge/msdk/widget/custom/baseview/MBButton;)V

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_14
    :goto_5
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_1

    :cond_15
    return-void
.end method
