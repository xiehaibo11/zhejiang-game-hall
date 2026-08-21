.class public Lcom/mbridge/msdk/mbnative/controller/c;
.super Ljava/lang/Object;
.source "NativeVideoTrackingReport.java"


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 21
    const-class v0, Lcom/mbridge/msdk/mbnative/controller/c;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/c;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 19
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/c;->a:Ljava/lang/String;

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 5

    if-eqz p0, :cond_3

    .line 57
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v0

    .line 58
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/db/t;->a()I

    move-result v1

    if-lez v1, :cond_3

    const-string v1, "2000022"

    .line 60
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/t;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    const-string v2, "2000021"

    .line 62
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/db/t;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    const-string v3, "2000043"

    .line 64
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/db/t;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 66
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/p;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object v2

    .line 68
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/entity/p;->b(Ljava/util/List;)Ljava/lang/String;

    move-result-object v1

    .line 69
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/p;->c(Ljava/util/List;)Ljava/lang/String;

    move-result-object v0

    .line 70
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 71
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 72
    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 74
    :cond_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 75
    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 77
    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 78
    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 80
    :cond_2
    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 81
    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    if-eqz p0, :cond_3

    .line 1024
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v1, :cond_3

    .line 1026
    :try_start_1
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/d/a;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/same/report/d/a;-><init>(Landroid/content/Context;)V

    .line 1027
    invoke-static {v0, p0, p1}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/same/net/g/d;

    move-result-object p0

    const/4 p1, 0x0

    .line 1028
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v0

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/same/net/f/d;->a:Ljava/lang/String;

    new-instance v2, Lcom/mbridge/msdk/mbnative/controller/c$1;

    invoke-direct {v2}, Lcom/mbridge/msdk/mbnative/controller/c$1;-><init>()V

    invoke-virtual {v1, p1, v0, p0, v2}, Lcom/mbridge/msdk/foundation/same/report/d/a;->post(ILjava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 1043
    :try_start_2
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 1044
    sget-object p1, Lcom/mbridge/msdk/mbnative/controller/c;->a:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_0

    :catch_1
    move-exception p0

    .line 86
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    return-void
.end method
