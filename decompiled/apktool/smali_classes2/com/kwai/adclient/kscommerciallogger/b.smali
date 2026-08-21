.class public final Lcom/kwai/adclient/kscommerciallogger/b;
.super Ljava/lang/Object;


# static fields
.field private static final aMV:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const-string v0, "cache_limit"

    const-string v1, "cache_num"

    const-string v2, "segment_name_top1"

    const-string v3, "segment_count_top1"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwai/adclient/kscommerciallogger/b;->aMV:[Ljava/lang/String;

    return-void
.end method

.method public static O(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 0

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static fY(Ljava/lang/String;)Z
    .locals 1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    const-string v0, "^[a-z][a-z0-9]*(_{1}[a-z0-9]+)+$"

    invoke-static {v0, p0}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result p0

    return p0
.end method
