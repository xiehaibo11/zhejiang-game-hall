.class public Lcom/ymnsdk/replugin/util/PrivacyUtils;
.super Ljava/lang/Object;
.source "PrivacyUtils.java"


# static fields
.field private static final USER_PRIVACY_ALONE:Ljava/lang/String; = "replugin_user_privacy_agree_alone"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getUserPrivacyAlone(Landroid/content/Context;)Z
    .locals 1

    const-string v0, "replugin_user_privacy_agree_alone"

    .line 12
    invoke-static {p0, v0}, Lcom/ymnsdk/replugin/util/MainfestUtils;->getMetaDataWithBool(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0
.end method
