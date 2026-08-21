.class public Lcom/mbridge/msdk/foundation/same/report/a;
.super Ljava/lang/Object;
.source "DomainReport.java"


# static fields
.field private static a:Ljava/lang/String; = "DomainReport"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/c/a;Ljava/lang/String;)Z
    .locals 6

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p0, :cond_3

    .line 16
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 17
    invoke-virtual {p0}, Lcom/mbridge/msdk/c/a;->aE()I

    move-result v2

    .line 18
    invoke-virtual {p0}, Lcom/mbridge/msdk/c/a;->k()Lorg/json/JSONArray;

    move-result-object v3

    .line 19
    invoke-virtual {p0}, Lcom/mbridge/msdk/c/a;->l()Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_1

    move v4, v0

    .line 21
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v4, v5, :cond_1

    .line 22
    invoke-virtual {p0, v4}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v5

    .line 23
    invoke-virtual {p1, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_0

    return v0

    :cond_0
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x2

    if-ne v2, p0, :cond_3

    if-eqz v3, :cond_4

    move p0, v0

    .line 30
    :goto_1
    invoke-virtual {v3}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge p0, v2, :cond_4

    .line 31
    invoke-virtual {v3, p0}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 32
    invoke-virtual {p1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v2, :cond_2

    return v1

    :cond_2
    add-int/lit8 p0, p0, 0x1

    goto :goto_1

    :catch_0
    move-exception p0

    .line 41
    sget-object p1, Lcom/mbridge/msdk/foundation/same/report/a;->a:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_3
    move v0, v1

    :cond_4
    move v1, v0

    :goto_2
    return v1
.end method
