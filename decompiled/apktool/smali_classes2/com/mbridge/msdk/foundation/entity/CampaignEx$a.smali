.class public final Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;
.super Ljava/lang/Object;
.source "CampaignEx.java"

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/entity/CampaignEx;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:I

.field private j:I

.field private k:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 2743
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 2753
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->a:Ljava/lang/String;

    .line 2754
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->b:Ljava/lang/String;

    .line 2755
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->c:Ljava/lang/String;

    .line 2756
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->d:Ljava/lang/String;

    .line 2757
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->e:Ljava/lang/String;

    .line 2758
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->f:Ljava/lang/String;

    .line 2759
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->g:Ljava/lang/String;

    .line 2760
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->h:Ljava/lang/String;

    const/4 v1, 0x0

    .line 2778
    iput v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->i:I

    .line 2779
    iput v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->j:I

    .line 2781
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->k:Ljava/lang/String;

    return-void
.end method

.method public static a(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;
    .locals 2

    const/4 v0, 0x0

    .line 2857
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    .line 2860
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 2866
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_1

    .line 2867
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :catch_0
    move-exception p0

    .line 2862
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_1

    .line 2863
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method

.method private static a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    .line 2877
    :try_start_0
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v0, "adchoice_icon"

    .line 2878
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3812
    iput-object v0, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->c:Ljava/lang/String;

    const-string v0, "adchoice_link"

    .line 2879
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 4804
    iput-object v0, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->b:Ljava/lang/String;

    const-string v0, "adchoice_size"

    .line 2880
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 4820
    iput-object v0, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->d:Ljava/lang/String;

    const-string v2, "ad_logo_link"

    .line 2882
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 5796
    iput-object v2, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->a:Ljava/lang/String;

    const-string v2, "adv_logo"

    .line 2883
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 5852
    iput-object v2, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->h:Ljava/lang/String;

    const-string v2, "adv_name"

    .line 2884
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 6844
    iput-object v2, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->g:Ljava/lang/String;

    const-string v2, "platform_logo"

    .line 2885
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 7836
    iput-object v2, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->f:Ljava/lang/String;

    const-string v2, "platform_name"

    .line 2886
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 8828
    iput-object v2, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->e:Ljava/lang/String;

    .line 2887
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->b(Ljava/lang/String;)I

    move-result v2

    .line 9775
    iput v2, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->j:I

    .line 2889
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->c(Ljava/lang/String;)I

    move-result v0

    .line 10767
    iput v0, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->i:I

    .line 2891
    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    .line 10784
    iput-object p0, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->k:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, v1

    goto :goto_2

    :catchall_0
    move-exception p0

    move-object v0, v1

    goto :goto_0

    :catch_0
    move-exception p0

    move-object v0, v1

    goto :goto_1

    :catchall_1
    move-exception p0

    .line 2898
    :goto_0
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 2899
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_2

    :catch_1
    move-exception p0

    .line 2894
    :goto_1
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 2895
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_2
    return-object v0
.end method

.method private static b(Ljava/lang/String;)I
    .locals 3

    const-string v0, "x"

    .line 2911
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    .line 2915
    :cond_0
    :try_start_0
    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2916
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 2917
    array-length v0, p0

    const/4 v1, 0x1

    if-le v0, v1, :cond_1

    .line 2918
    aget-object p0, p0, v1

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    :cond_1
    return v2
.end method

.method private static c(Ljava/lang/String;)I
    .locals 3

    const-string v0, "x"

    .line 2931
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    .line 2935
    :cond_0
    :try_start_0
    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2936
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 2937
    array-length v0, p0

    if-lez v0, :cond_1

    .line 2938
    aget-object p0, p0, v2

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    :cond_1
    return v2
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 2763
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->i:I

    return v0
.end method

.method public final b()I
    .locals 1

    .line 2771
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->j:I

    return v0
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 2788
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->k:Ljava/lang/String;

    return-object v0
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 2800
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 2808
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    .line 2816
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->d:Ljava/lang/String;

    return-object v0
.end method
