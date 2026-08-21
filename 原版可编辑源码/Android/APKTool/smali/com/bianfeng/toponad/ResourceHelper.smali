.class public Lcom/bianfeng/toponad/ResourceHelper;
.super Ljava/lang/Object;
.source "ResourceHelper.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    .line 482
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 483
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    .line 482
    invoke-virtual {v0, p1, p2, p0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 485
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method public static initResourceR(Landroid/content/Context;)V
    .locals 2

    .line 13
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 16
    const-class v1, Lcom/mbridge/msdk/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 17
    const-class v1, Lcom/mbridge/msdk/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 18
    const-class v1, Lcom/mbridge/msdk/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 19
    const-class v1, Lcom/mbridge/msdk/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 20
    const-class v1, Lcom/mbridge/msdk/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 21
    const-class v1, Lcom/mbridge/msdk/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 22
    const-class v1, Lcom/mbridge/msdk/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 23
    const-class v1, Lcom/mbridge/msdk/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 24
    const-class v1, Lcom/mbridge/msdk/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 25
    const-class v1, Lcom/mbridge/msdk/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 26
    const-class v1, Lcom/mbridge/msdk/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 27
    const-class v1, Lcom/mbridge/msdk/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 28
    const-class v1, Lcom/mbridge/msdk/mbbid/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 29
    const-class v1, Lcom/mbridge/msdk/mbbid/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 30
    const-class v1, Lcom/mbridge/msdk/mbbid/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 31
    const-class v1, Lcom/mbridge/msdk/mbbid/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 32
    const-class v1, Lcom/mbridge/msdk/mbbid/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 33
    const-class v1, Lcom/mbridge/msdk/mbbid/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 34
    const-class v1, Lcom/mbridge/msdk/mbbid/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 35
    const-class v1, Lcom/mbridge/msdk/mbbid/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 36
    const-class v1, Lcom/mbridge/msdk/mbbid/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 37
    const-class v1, Lcom/mbridge/msdk/mbbid/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 38
    const-class v1, Lcom/mbridge/msdk/mbbid/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 39
    const-class v1, Lcom/mbridge/msdk/mbbid/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 40
    const-class v1, Lcom/mbridge/msdk/advanced/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 41
    const-class v1, Lcom/mbridge/msdk/advanced/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 42
    const-class v1, Lcom/mbridge/msdk/advanced/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 43
    const-class v1, Lcom/mbridge/msdk/advanced/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 44
    const-class v1, Lcom/mbridge/msdk/advanced/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 45
    const-class v1, Lcom/mbridge/msdk/advanced/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 46
    const-class v1, Lcom/mbridge/msdk/advanced/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 47
    const-class v1, Lcom/mbridge/msdk/advanced/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 48
    const-class v1, Lcom/mbridge/msdk/advanced/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 49
    const-class v1, Lcom/mbridge/msdk/advanced/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 50
    const-class v1, Lcom/mbridge/msdk/advanced/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 51
    const-class v1, Lcom/mbridge/msdk/advanced/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 52
    const-class v1, Lcom/mbridge/msdk/mbnative/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 53
    const-class v1, Lcom/mbridge/msdk/mbnative/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 54
    const-class v1, Lcom/mbridge/msdk/mbnative/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 55
    const-class v1, Lcom/mbridge/msdk/mbnative/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 56
    const-class v1, Lcom/mbridge/msdk/mbnative/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 57
    const-class v1, Lcom/mbridge/msdk/mbnative/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 58
    const-class v1, Lcom/mbridge/msdk/mbnative/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 59
    const-class v1, Lcom/mbridge/msdk/mbnative/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 60
    const-class v1, Lcom/mbridge/msdk/mbnative/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 61
    const-class v1, Lcom/mbridge/msdk/mbnative/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 62
    const-class v1, Lcom/mbridge/msdk/mbnative/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 63
    const-class v1, Lcom/mbridge/msdk/mbnative/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 64
    const-class v1, Lcom/mbridge/msdk/video/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 65
    const-class v1, Lcom/mbridge/msdk/video/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 66
    const-class v1, Lcom/mbridge/msdk/video/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 67
    const-class v1, Lcom/mbridge/msdk/video/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 68
    const-class v1, Lcom/mbridge/msdk/video/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 69
    const-class v1, Lcom/mbridge/msdk/video/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 70
    const-class v1, Lcom/mbridge/msdk/video/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 71
    const-class v1, Lcom/mbridge/msdk/video/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 72
    const-class v1, Lcom/mbridge/msdk/video/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 73
    const-class v1, Lcom/mbridge/msdk/video/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 74
    const-class v1, Lcom/mbridge/msdk/video/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 75
    const-class v1, Lcom/mbridge/msdk/video/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 76
    const-class v1, Lcom/mbridge/msdk/splash/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 77
    const-class v1, Lcom/mbridge/msdk/splash/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 78
    const-class v1, Lcom/mbridge/msdk/splash/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 79
    const-class v1, Lcom/mbridge/msdk/splash/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 80
    const-class v1, Lcom/mbridge/msdk/splash/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 81
    const-class v1, Lcom/mbridge/msdk/splash/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 82
    const-class v1, Lcom/mbridge/msdk/splash/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 83
    const-class v1, Lcom/mbridge/msdk/splash/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 84
    const-class v1, Lcom/mbridge/msdk/splash/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 85
    const-class v1, Lcom/mbridge/msdk/splash/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 86
    const-class v1, Lcom/mbridge/msdk/splash/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 87
    const-class v1, Lcom/mbridge/msdk/splash/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 88
    const-class v1, Lcom/mbridge/msdk/interstitial/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 89
    const-class v1, Lcom/mbridge/msdk/interstitial/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 90
    const-class v1, Lcom/mbridge/msdk/interstitial/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 91
    const-class v1, Lcom/mbridge/msdk/interstitial/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 92
    const-class v1, Lcom/mbridge/msdk/interstitial/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 93
    const-class v1, Lcom/mbridge/msdk/interstitial/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 94
    const-class v1, Lcom/mbridge/msdk/interstitial/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 95
    const-class v1, Lcom/mbridge/msdk/interstitial/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 96
    const-class v1, Lcom/mbridge/msdk/interstitial/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 97
    const-class v1, Lcom/mbridge/msdk/interstitial/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 98
    const-class v1, Lcom/mbridge/msdk/interstitial/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 99
    const-class v1, Lcom/mbridge/msdk/interstitial/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 100
    const-class v1, Lcom/mbridge/msdk/playercommon/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 101
    const-class v1, Lcom/mbridge/msdk/playercommon/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 102
    const-class v1, Lcom/mbridge/msdk/playercommon/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 103
    const-class v1, Lcom/mbridge/msdk/playercommon/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 104
    const-class v1, Lcom/mbridge/msdk/playercommon/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 105
    const-class v1, Lcom/mbridge/msdk/playercommon/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 106
    const-class v1, Lcom/mbridge/msdk/playercommon/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 107
    const-class v1, Lcom/mbridge/msdk/playercommon/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 108
    const-class v1, Lcom/mbridge/msdk/playercommon/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 109
    const-class v1, Lcom/mbridge/msdk/playercommon/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 110
    const-class v1, Lcom/mbridge/msdk/playercommon/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 111
    const-class v1, Lcom/mbridge/msdk/playercommon/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 112
    const-class v1, Lcom/mbridge/msdk/videocommon/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 113
    const-class v1, Lcom/mbridge/msdk/videocommon/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 114
    const-class v1, Lcom/mbridge/msdk/videocommon/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 115
    const-class v1, Lcom/mbridge/msdk/videocommon/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 116
    const-class v1, Lcom/mbridge/msdk/videocommon/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 117
    const-class v1, Lcom/mbridge/msdk/videocommon/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 118
    const-class v1, Lcom/mbridge/msdk/videocommon/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 119
    const-class v1, Lcom/mbridge/msdk/videocommon/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 120
    const-class v1, Lcom/mbridge/msdk/videocommon/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 121
    const-class v1, Lcom/mbridge/msdk/videocommon/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 122
    const-class v1, Lcom/mbridge/msdk/videocommon/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 123
    const-class v1, Lcom/mbridge/msdk/videocommon/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 124
    const-class v1, Lcom/mbridge/msdk/nativex/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 125
    const-class v1, Lcom/mbridge/msdk/nativex/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 126
    const-class v1, Lcom/mbridge/msdk/nativex/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 127
    const-class v1, Lcom/mbridge/msdk/nativex/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 128
    const-class v1, Lcom/mbridge/msdk/nativex/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 129
    const-class v1, Lcom/mbridge/msdk/nativex/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 130
    const-class v1, Lcom/mbridge/msdk/nativex/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 131
    const-class v1, Lcom/mbridge/msdk/nativex/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 132
    const-class v1, Lcom/mbridge/msdk/nativex/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 133
    const-class v1, Lcom/mbridge/msdk/nativex/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 134
    const-class v1, Lcom/mbridge/msdk/nativex/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 135
    const-class v1, Lcom/mbridge/msdk/nativex/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 136
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 137
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 138
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 139
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 140
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 141
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 142
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 143
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 144
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 145
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 146
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 147
    const-class v1, Lcom/mbridge/msdk/mbsignalcommon/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 148
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 149
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 150
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 151
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 152
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 153
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 154
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 155
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 156
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 157
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 158
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 159
    const-class v1, Lcom/mbridge/msdk/newinterstitial/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 160
    const-class v1, Lcom/mbridge/msdk/reward/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 161
    const-class v1, Lcom/mbridge/msdk/reward/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 162
    const-class v1, Lcom/mbridge/msdk/reward/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 163
    const-class v1, Lcom/mbridge/msdk/reward/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 164
    const-class v1, Lcom/mbridge/msdk/reward/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 165
    const-class v1, Lcom/mbridge/msdk/reward/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 166
    const-class v1, Lcom/mbridge/msdk/reward/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 167
    const-class v1, Lcom/mbridge/msdk/reward/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 168
    const-class v1, Lcom/mbridge/msdk/reward/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 169
    const-class v1, Lcom/mbridge/msdk/reward/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 170
    const-class v1, Lcom/mbridge/msdk/reward/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 171
    const-class v1, Lcom/mbridge/msdk/reward/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 172
    const-class v1, Lcom/mbridge/msdk/dycreator/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 173
    const-class v1, Lcom/mbridge/msdk/dycreator/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 174
    const-class v1, Lcom/mbridge/msdk/dycreator/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 175
    const-class v1, Lcom/mbridge/msdk/dycreator/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 176
    const-class v1, Lcom/mbridge/msdk/dycreator/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 177
    const-class v1, Lcom/mbridge/msdk/dycreator/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 178
    const-class v1, Lcom/mbridge/msdk/dycreator/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 179
    const-class v1, Lcom/mbridge/msdk/dycreator/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 180
    const-class v1, Lcom/mbridge/msdk/dycreator/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 181
    const-class v1, Lcom/mbridge/msdk/dycreator/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 182
    const-class v1, Lcom/mbridge/msdk/dycreator/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 183
    const-class v1, Lcom/mbridge/msdk/dycreator/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 184
    const-class v1, Lcom/mbridge/msdk/banner/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 185
    const-class v1, Lcom/mbridge/msdk/banner/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 186
    const-class v1, Lcom/mbridge/msdk/banner/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 187
    const-class v1, Lcom/mbridge/msdk/banner/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 188
    const-class v1, Lcom/mbridge/msdk/banner/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 189
    const-class v1, Lcom/mbridge/msdk/banner/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 190
    const-class v1, Lcom/mbridge/msdk/banner/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 191
    const-class v1, Lcom/mbridge/msdk/banner/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 192
    const-class v1, Lcom/mbridge/msdk/banner/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 193
    const-class v1, Lcom/mbridge/msdk/banner/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 194
    const-class v1, Lcom/mbridge/msdk/banner/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 195
    const-class v1, Lcom/mbridge/msdk/banner/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 196
    const-class v1, Lcom/kwad/sdk/R$raw;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 197
    const-class v1, Lcom/kwad/sdk/R$bool;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 198
    const-class v1, Lcom/kwad/sdk/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 199
    const-class v1, Lcom/kwad/sdk/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 200
    const-class v1, Lcom/kwad/sdk/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 201
    const-class v1, Lcom/kwad/sdk/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 202
    const-class v1, Lcom/kwad/sdk/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 203
    const-class v1, Lcom/kwad/sdk/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 204
    const-class v1, Lcom/kwad/sdk/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 205
    const-class v1, Lcom/kwad/sdk/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 206
    const-class v1, Lcom/kwad/sdk/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 207
    const-class v1, Lcom/kwad/sdk/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 208
    const-class v1, Lcom/kwad/sdk/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 209
    const-class v1, Lcom/kwad/sdk/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 210
    const-class v1, Lcom/czhj/sdk/common/R$bool;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 211
    const-class v1, Lcom/czhj/sdk/common/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 212
    const-class v1, Lcom/czhj/sdk/common/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 213
    const-class v1, Lcom/czhj/sdk/common/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 214
    const-class v1, Lcom/czhj/sdk/common/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 215
    const-class v1, Lcom/czhj/sdk/common/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 216
    const-class v1, Lcom/czhj/sdk/common/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 217
    const-class v1, Lcom/czhj/sdk/common/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 218
    const-class v1, Lcom/czhj/sdk/common/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 219
    const-class v1, Lcom/czhj/sdk/common/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 220
    const-class v1, Lcom/czhj/sdk/common/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 221
    const-class v1, Lcom/czhj/sdk/common/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 222
    const-class v1, Lcom/tkay/sdk/core/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 223
    const-class v1, Lcom/tkay/sdk/core/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 224
    const-class v1, Lcom/tkay/sdk/core/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 225
    const-class v1, Lcom/tkay/sdk/core/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 226
    const-class v1, Lcom/tkay/sdk/core/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 227
    const-class v1, Lcom/tkay/sdk/core/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 228
    const-class v1, Lcom/tkay/sdk/core/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 229
    const-class v1, Lcom/tkay/sdk/core/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 230
    const-class v1, Lcom/tkay/sdk/core/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 231
    const-class v1, Lcom/tkay/sdk/china/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 232
    const-class v1, Lcom/tkay/sdk/china/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 233
    const-class v1, Lcom/tkay/sdk/china/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 234
    const-class v1, Lcom/tkay/sdk/china/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 235
    const-class v1, Lcom/tkay/sdk/china/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 236
    const-class v1, Lcom/tkay/sdk/china/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 237
    const-class v1, Lcom/tkay/sdk/china/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 238
    const-class v1, Lcom/sigmob/sdk/R$xml;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 239
    const-class v1, Lcom/sigmob/sdk/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 240
    const-class v1, Lcom/sigmob/sdk/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 241
    const-class v1, Lcom/sigmob/sdk/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 242
    const-class v1, Lcom/sigmob/sdk/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 243
    const-class v1, Lcom/sigmob/sdk/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 244
    const-class v1, Lcom/sigmob/sdk/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 245
    const-class v1, Lcom/bykv/vk/openvk/R$raw;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 246
    const-class v1, Lcom/bykv/vk/openvk/R$bool;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 247
    const-class v1, Lcom/bykv/vk/openvk/R$interpolator;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 248
    const-class v1, Lcom/bykv/vk/openvk/R$id;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 249
    const-class v1, Lcom/bykv/vk/openvk/R$animator;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 250
    const-class v1, Lcom/bykv/vk/openvk/R$dimen;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 251
    const-class v1, Lcom/bykv/vk/openvk/R$integer;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 252
    const-class v1, Lcom/bykv/vk/openvk/R$color;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 253
    const-class v1, Lcom/bykv/vk/openvk/R$drawable;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 254
    const-class v1, Lcom/bykv/vk/openvk/R$layout;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 255
    const-class v1, Lcom/bykv/vk/openvk/R$attr;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 256
    const-class v1, Lcom/bykv/vk/openvk/R$anim;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 257
    const-class v1, Lcom/bykv/vk/openvk/R$style;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 258
    const-class v1, Lcom/bykv/vk/openvk/R$string;

    invoke-static {p0, v1}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 259
    const-class v1, Lcom/bykv/vk/openvk/R$styleable;

    invoke-static {p0, v1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    .line 260
    const-class v0, Lcom/qq/e/R$xml;

    invoke-static {p0, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 261
    const-class v0, Lcom/qq/e/R$integer;

    invoke-static {p0, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 262
    const-class v0, Lcom/qq/e/R$drawable;

    invoke-static {p0, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 263
    const-class v0, Lcom/qq/e/R$anim;

    invoke-static {p0, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 264
    const-class v0, Lcom/qq/e/R$style;

    invoke-static {p0, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    .line 265
    const-class v0, Lcom/qq/e/R$string;

    invoke-static {p0, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    return-void
.end method

.method protected static setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/util/Map<",
            "Ljava/lang/Object;",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 491
    invoke-virtual {p1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object p0

    .line 492
    array-length p1, p0

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    if-ge v1, p1, :cond_2

    aget-object v2, p0, v1

    const/4 v3, 0x1

    .line 493
    invoke-virtual {v2, v3}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    const/4 v4, 0x0

    .line 495
    :try_start_0
    invoke-virtual {v2, v4}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 496
    instance-of v4, v2, [I

    if-eqz v4, :cond_1

    .line 497
    check-cast v2, [I

    check-cast v2, [I

    move v4, v0

    .line 498
    :goto_1
    array-length v5, v2

    if-ge v4, v5, :cond_1

    .line 499
    aget v5, v2, v4

    .line 500
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {p2, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    .line 501
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {p2, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-static {v2, v4, v6}, Ljava/lang/reflect/Array;->set(Ljava/lang/Object;ILjava/lang/Object;)V

    .line 502
    sget-object v6, Ljava/lang/System;->out:Ljava/io/PrintStream;

    const-string v7, "setted attr array index %d: %d -> %d "

    const/4 v8, 0x3

    new-array v8, v8, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v8, v0

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v8, v3

    const/4 v9, 0x2

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {p2, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    aput-object v5, v8, v9

    invoke-static {v7, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v6, v5}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :catch_0
    move-exception v2

    .line 507
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method protected static setIds(Landroid/content/Context;Ljava/lang/Class;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "*>;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 460
    invoke-static {p0, p1, v0}, Lcom/bianfeng/toponad/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    return-void
.end method

.method protected static setIds(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/util/Map<",
            "Ljava/lang/Object;",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 465
    invoke-virtual {p1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v0

    .line 466
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    const/4 v4, 0x1

    .line 467
    invoke-virtual {v3, v4}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 469
    :try_start_0
    invoke-virtual {v3}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v5

    invoke-static {p0, v4, v5}, Lcom/bianfeng/toponad/ResourceHelper;->getId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    const/4 v5, 0x0

    if-eqz p2, :cond_0

    .line 471
    invoke-virtual {v3, v5}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-interface {p2, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 473
    :cond_0
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v5, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v3

    .line 475
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method
