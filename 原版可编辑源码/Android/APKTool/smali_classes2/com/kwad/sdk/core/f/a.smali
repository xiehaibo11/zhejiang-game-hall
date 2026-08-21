.class public final Lcom/kwad/sdk/core/f/a;
.super Ljava/lang/Object;


# static fields
.field private static aqh:Ljava/lang/String; = ""

.field private static aqi:Z

.field private static sGetOaidFail:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method static synthetic access$102(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    sput-object p0, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    return-object p0
.end method

.method public static ba(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Je()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jf()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jf()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    sget-object v0, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object p0, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    return-object p0

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/utils/at;->Je()Z

    move-result v0

    if-nez v0, :cond_3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v1, 0x800

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    invoke-static {p0}, Lcom/kwad/sdk/core/f/a;->initAsync(Landroid/content/Context;)V

    sget-object p0, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    return-object p0

    :cond_3
    :goto_0
    sget-object p0, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    return-object p0
.end method

.method private static bb(Landroid/content/Context;)V
    .locals 5

    sget-object v0, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    if-nez p0, :cond_0

    goto/16 :goto_3

    :cond_0
    sget-boolean v0, Lcom/kwad/sdk/core/f/a;->aqi:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/sdk/core/f/a;->aqi:Z

    sget-boolean v1, Lcom/kwad/sdk/core/f/a;->sGetOaidFail:Z

    if-eqz v1, :cond_2

    return-void

    :cond_2
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    :try_start_0
    sget-object v1, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    const/4 v2, -0x1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v3

    const/4 v4, 0x0

    sparse-switch v3, :sswitch_data_0

    goto/16 :goto_0

    :sswitch_0
    const-string v3, "HUAWEI"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    move v2, v4

    goto/16 :goto_0

    :sswitch_1
    const-string v3, "FERRMEOS"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/16 v2, 0xd

    goto/16 :goto_0

    :sswitch_2
    const-string v3, "MOTOLORA"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/4 v2, 0x7

    goto/16 :goto_0

    :sswitch_3
    const-string v3, "NUBIA"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/16 v2, 0x9

    goto/16 :goto_0

    :sswitch_4
    const-string v3, "MEIZU"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/16 v2, 0x8

    goto/16 :goto_0

    :sswitch_5
    const-string v3, "VIVO"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/4 v2, 0x5

    goto :goto_0

    :sswitch_6
    const-string v3, "SSUI"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/16 v2, 0xe

    goto :goto_0

    :sswitch_7
    const-string v3, "OPPO"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/4 v2, 0x3

    goto :goto_0

    :sswitch_8
    const-string v3, "ASUS"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/16 v2, 0xb

    goto :goto_0

    :sswitch_9
    const-string v3, "ZTE"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/16 v2, 0xc

    goto :goto_0

    :sswitch_a
    const-string v3, "ONEPLUS"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/4 v2, 0x4

    goto :goto_0

    :sswitch_b
    const-string v3, "BLACKSHARK"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/4 v2, 0x2

    goto :goto_0

    :sswitch_c
    const-string v3, "XIAOMI"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    move v2, v0

    goto :goto_0

    :sswitch_d
    const-string v3, "SAMSUNG"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/16 v2, 0xa

    goto :goto_0

    :sswitch_e
    const-string v3, "LENOVO"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/4 v2, 0x6

    :cond_3
    :goto_0
    packed-switch v2, :pswitch_data_0

    goto :goto_2

    :pswitch_0
    new-instance v2, Lcom/kwad/sdk/core/f/a/j;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/j;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/j;->getOAID()Ljava/lang/String;

    move-result-object p0

    :goto_1
    sput-object p0, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    goto :goto_2

    :pswitch_1
    new-instance v2, Lcom/kwad/sdk/core/f/a/a;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/a;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :pswitch_2
    new-instance v2, Lcom/kwad/sdk/core/f/a/g;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/g;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/g;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :pswitch_3
    new-instance v2, Lcom/kwad/sdk/core/f/a/e;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/e;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/e;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :pswitch_4
    new-instance v2, Lcom/kwad/sdk/core/f/a/d;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/d;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :pswitch_5
    new-instance v2, Lcom/kwad/sdk/core/f/a/c;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/c;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/c;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :pswitch_6
    new-instance v2, Lcom/kwad/sdk/core/f/a/h;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/h;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/h;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :pswitch_7
    new-instance v2, Lcom/kwad/sdk/core/f/a/f;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/f;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/f;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :pswitch_8
    new-instance v2, Lcom/kwad/sdk/core/f/a/i;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/i;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/i;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :pswitch_9
    new-instance v2, Lcom/kwad/sdk/core/f/a/b;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/f/a/b;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/kwad/sdk/core/f/a/b;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :goto_2
    const-string p0, "OAIDHelper"

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "manufacturer:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "--OAID:"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    sget-object p0, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_4

    sput-boolean v0, Lcom/kwad/sdk/core/f/a;->sGetOaidFail:Z

    :cond_4
    sput-boolean v4, Lcom/kwad/sdk/core/f/a;->aqi:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_5
    :goto_3
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x7a5eb2cd -> :sswitch_e
        -0x660bb426 -> :sswitch_d
        -0x65b21745 -> :sswitch_c
        -0x43a32cba -> :sswitch_b
        -0x23e7db20 -> :sswitch_a
        0x15c4b -> :sswitch_9
        0x1ece50 -> :sswitch_8
        0x251fa0 -> :sswitch_7
        0x26fcf4 -> :sswitch_6
        0x2834ac -> :sswitch_5
        0x45d8cac -> :sswitch_4
        0x472cdb3 -> :sswitch_3
        0x259adc0f -> :sswitch_2
        0x3a35353b -> :sswitch_1
        0x7fa995e7 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_9
        :pswitch_8
        :pswitch_8
        :pswitch_7
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method static synthetic bc(Landroid/content/Context;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/f/a;->bb(Landroid/content/Context;)V

    return-void
.end method

.method public static initAsync(Landroid/content/Context;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/f/a;->aqh:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/f/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/f/a$1;-><init>(Landroid/content/Context;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic mI()V
    .locals 0

    return-void
.end method
