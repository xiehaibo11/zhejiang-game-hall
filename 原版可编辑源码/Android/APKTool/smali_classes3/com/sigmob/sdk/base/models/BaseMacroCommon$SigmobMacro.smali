.class public final enum Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/BaseMacroCommon;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "SigmobMacro"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

.field public static final enum _BUNDLEID_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

.field public static final enum _COUNTRY_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

.field public static final enum _LANGUAGE_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

.field public static final enum _MC_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

.field public static final enum _OSVERSION_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

.field public static final enum _TIMEMILLIS_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

.field public static final enum _TIMESTAMP_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;


# direct methods
.method static constructor <clinit>()V
    .locals 10

    new-instance v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    const/4 v1, 0x0

    const-string v2, "_MC_"

    invoke-direct {v0, v2, v1}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_MC_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    new-instance v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    const/4 v2, 0x1

    const-string v3, "_COUNTRY_"

    invoke-direct {v0, v3, v2}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_COUNTRY_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    new-instance v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    const/4 v3, 0x2

    const-string v4, "_TIMESTAMP_"

    invoke-direct {v0, v4, v3}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_TIMESTAMP_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    new-instance v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    const/4 v4, 0x3

    const-string v5, "_OSVERSION_"

    invoke-direct {v0, v5, v4}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_OSVERSION_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    new-instance v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    const/4 v5, 0x4

    const-string v6, "_BUNDLEID_"

    invoke-direct {v0, v6, v5}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_BUNDLEID_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    new-instance v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    const/4 v6, 0x5

    const-string v7, "_LANGUAGE_"

    invoke-direct {v0, v7, v6}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_LANGUAGE_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    new-instance v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    const/4 v7, 0x6

    const-string v8, "_TIMEMILLIS_"

    invoke-direct {v0, v8, v7}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_TIMEMILLIS_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    const/4 v8, 0x7

    new-array v8, v8, [Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    sget-object v9, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_MC_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    aput-object v9, v8, v1

    sget-object v1, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_COUNTRY_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    aput-object v1, v8, v2

    sget-object v1, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_TIMESTAMP_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    aput-object v1, v8, v3

    sget-object v1, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_OSVERSION_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    aput-object v1, v8, v4

    sget-object v1, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_BUNDLEID_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    aput-object v1, v8, v5

    sget-object v1, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->_LANGUAGE_:Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    aput-object v1, v8, v6

    aput-object v0, v8, v7

    sput-object v8, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->$VALUES:[Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method static getMacroValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    const-string v0, "unFind"

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/base/models/BaseMacroCommon$1;->$SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro:[I

    invoke-static {p0}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    move-result-object p0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->ordinal()I

    move-result p0

    aget p0, v1, p0

    packed-switch p0, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :pswitch_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    div-long/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :pswitch_2
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceOsVersion()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :pswitch_3
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceLocale()Ljava/util/Locale;

    move-result-object p0

    invoke-virtual {p0}, Ljava/util/Locale;->getDisplayLanguage()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :pswitch_4
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/ClientMetadata;->getAppPackageName()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :pswitch_5
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceLocale()Ljava/util/Locale;

    move-result-object p0

    invoke-virtual {p0}, Ljava/util/Locale;->getCountry()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :pswitch_6
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/ClientMetadata;->getNetworkOperatorForUrl()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    :goto_0
    return-object v0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;
    .locals 1

    const-class v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->$VALUES:[Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    invoke-virtual {v0}, [Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;

    return-object v0
.end method
