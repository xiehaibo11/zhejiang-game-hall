.class public Lcom/cmic/gen/sdk/e/j;
.super Ljava/lang/Object;
.source "SIMUtils.java"


# static fields
.field private static b:Lcom/cmic/gen/sdk/e/j;


# instance fields
.field private final a:Landroid/content/Context;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 25
    iput-object p1, p0, Lcom/cmic/gen/sdk/e/j;->a:Landroid/content/Context;

    return-void
.end method

.method public static a()Lcom/cmic/gen/sdk/e/j;
    .locals 1

    .line 30
    sget-object v0, Lcom/cmic/gen/sdk/e/j;->b:Lcom/cmic/gen/sdk/e/j;

    return-object v0
.end method

.method public static a(Landroid/content/Context;)V
    .locals 1

    .line 21
    new-instance v0, Lcom/cmic/gen/sdk/e/j;

    invoke-direct {v0, p0}, Lcom/cmic/gen/sdk/e/j;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/cmic/gen/sdk/e/j;->b:Lcom/cmic/gen/sdk/e/j;

    return-void
.end method

.method private b(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 48
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const v1, 0x2f60c77

    if-eq v0, v1, :cond_1

    const v1, 0x2f60c8e

    if-eq v0, v1, :cond_0

    packed-switch v0, :pswitch_data_0

    goto/16 :goto_0

    :pswitch_0
    const-string v0, "46007"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x2

    goto :goto_1

    :pswitch_1
    const-string v0, "46006"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x5

    goto :goto_1

    :pswitch_2
    const-string v0, "46005"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/16 p1, 0x8

    goto :goto_1

    :pswitch_3
    const-string v0, "46004"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x3

    goto :goto_1

    :pswitch_4
    const-string v0, "46003"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x7

    goto :goto_1

    :pswitch_5
    const-string v0, "46002"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x1

    goto :goto_1

    :pswitch_6
    const-string v0, "46001"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x4

    goto :goto_1

    :pswitch_7
    const-string v0, "46000"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x0

    goto :goto_1

    :cond_0
    const-string v0, "46011"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/16 p1, 0x9

    goto :goto_1

    :cond_1
    const-string v0, "46009"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x6

    goto :goto_1

    :cond_2
    :goto_0
    const/4 p1, -0x1

    :goto_1
    const-string v0, "SIMUtils"

    packed-switch p1, :pswitch_data_1

    const-string p1, "0"

    return-object p1

    :pswitch_8
    const-string p1, "\u4e2d\u56fd\u7535\u4fe1"

    .line 65
    invoke-static {v0, p1}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "3"

    return-object p1

    :pswitch_9
    const-string p1, "\u4e2d\u56fd\u8054\u901a"

    .line 59
    invoke-static {v0, p1}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "2"

    return-object p1

    :pswitch_a
    const-string p1, "\u4e2d\u56fd\u79fb\u52a8"

    .line 53
    invoke-static {v0, p1}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "1"

    return-object p1

    :pswitch_data_0
    .packed-switch 0x2f60c6e
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x0
        :pswitch_a
        :pswitch_a
        :pswitch_a
        :pswitch_a
        :pswitch_9
        :pswitch_9
        :pswitch_9
        :pswitch_8
        :pswitch_8
        :pswitch_8
    .end packed-switch
.end method


# virtual methods
.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 74
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 75
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/e/j;->c()Ljava/lang/String;

    move-result-object p1

    .line 77
    :cond_0
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/e/j;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public b()Ljava/lang/String;
    .locals 1

    .line 36
    :try_start_0
    invoke-static {}, Lcom/cmic/gen/sdk/b/a;->a()Lcom/cmic/gen/sdk/b/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/b/a;->b()Lcom/cmic/gen/sdk/b/a$a;

    move-result-object v0

    .line 37
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/b/a$a;->a()I

    move-result v0

    if-ltz v0, :cond_0

    .line 39
    invoke-static {v0}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 42
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public c()Ljava/lang/String;
    .locals 3

    .line 81
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/j;->a:Landroid/content/Context;

    const-string v1, "phone"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    if-eqz v0, :cond_0

    .line 83
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getSimOperator()Ljava/lang/String;

    move-result-object v0

    .line 84
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "SysOperator= "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SIMUtils"

    invoke-static {v2, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method
