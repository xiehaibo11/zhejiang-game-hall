.class public Lcom/cmic/gen/sdk/e/h;
.super Ljava/lang/Object;
.source "PhoneScripUtils.java"


# static fields
.field private static a:Ljava/lang/String; = null

.field private static b:Ljava/lang/String; = null

.field private static c:J = 0x0L

.field private static d:I = -0x1


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private static a(Ljava/lang/String;)I
    .locals 2

    .line 136
    sget-object v0, Lcom/cmic/gen/sdk/e/h;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 137
    sget-object v0, Lcom/cmic/gen/sdk/e/h;->b:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string v0, "pre_sim_key"

    const-string v1, ""

    .line 139
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 140
    sput-object v0, Lcom/cmic/gen/sdk/e/h;->b:Ljava/lang/String;

    .line 142
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 p0, 0x0

    return p0

    .line 145
    :cond_1
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p0, 0x1

    return p0

    :cond_2
    const/4 p0, 0x2

    return p0
.end method

.method public static a()J
    .locals 9

    .line 118
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 120
    sget-object v2, Lcom/cmic/gen/sdk/e/h;->a:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-wide/16 v3, 0x2710

    const-wide/16 v5, 0x0

    if-nez v2, :cond_0

    .line 121
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v7, Lcom/cmic/gen/sdk/e/h;->b:Ljava/lang/String;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " "

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v7, Lcom/cmic/gen/sdk/e/h;->c:J

    invoke-virtual {v2, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v7, "PhoneScripUtils"

    invoke-static {v7, v2}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    sget-wide v7, Lcom/cmic/gen/sdk/e/h;->c:J

    :goto_0
    sub-long/2addr v7, v0

    sub-long/2addr v7, v3

    goto :goto_1

    :cond_0
    const-string v2, "phonescripcache"

    const-string v7, ""

    .line 124
    invoke-static {v2, v7}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v7, "phonescripstarttime"

    .line 125
    invoke-static {v7, v5, v6}, Lcom/cmic/gen/sdk/e/k;->a(Ljava/lang/String;J)J

    move-result-wide v7

    .line 126
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    goto :goto_0

    :cond_1
    move-wide v7, v5

    :goto_1
    const-wide/16 v0, 0x3e8

    .line 130
    div-long/2addr v7, v0

    invoke-static {v7, v8, v5, v6}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    return-wide v0
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    .line 81
    sget-object v0, Lcom/cmic/gen/sdk/e/h;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "phonescripcache"

    const-string v1, ""

    .line 82
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 83
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string p0, "PhoneScripUtils"

    const-string v0, "null"

    .line 84
    invoke-static {p0, v0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-wide/16 v2, 0x0

    const-string v4, "phonescripstarttime"

    .line 87
    invoke-static {v4, v2, v3}, Lcom/cmic/gen/sdk/e/k;->a(Ljava/lang/String;J)J

    move-result-wide v2

    sput-wide v2, Lcom/cmic/gen/sdk/e/h;->c:J

    const-string v2, "pre_sim_key"

    .line 88
    invoke-static {v2, v1}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/cmic/gen/sdk/e/h;->b:Ljava/lang/String;

    const/4 v1, -0x1

    const-string v2, "phonescripversion"

    .line 89
    invoke-static {v2, v1}, Lcom/cmic/gen/sdk/e/k;->a(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/cmic/gen/sdk/e/h;->d:I

    .line 90
    invoke-static {p0, v0}, Lcom/cmic/gen/sdk/e/b;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/cmic/gen/sdk/e/h;->a:Ljava/lang/String;

    return-object p0

    .line 93
    :cond_1
    sget-object p0, Lcom/cmic/gen/sdk/e/h;->a:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic a(Landroid/content/Context;Ljava/lang/String;JLjava/lang/String;)V
    .locals 0

    .line 9
    invoke-static {p0, p1, p2, p3, p4}, Lcom/cmic/gen/sdk/e/h;->b(Landroid/content/Context;Ljava/lang/String;JLjava/lang/String;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 40
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-wide/16 v0, 0x0

    cmp-long v2, p2, v0

    if-lez v2, :cond_2

    .line 41
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "save phone scrip simKey = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PhoneScripUtils"

    invoke-static {v1, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    sput-object p1, Lcom/cmic/gen/sdk/e/h;->a:Ljava/lang/String;

    .line 44
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    mul-long p2, p2, v2

    add-long/2addr v0, p2

    sput-wide v0, Lcom/cmic/gen/sdk/e/h;->c:J

    .line 45
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-wide v1, Lcom/cmic/gen/sdk/e/h;->c:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "sLifeTime"

    invoke-static {v1, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 46
    sput-object p4, Lcom/cmic/gen/sdk/e/h;->b:Ljava/lang/String;

    const/4 v0, 0x1

    .line 47
    sput v0, Lcom/cmic/gen/sdk/e/h;->d:I

    const-string v0, "operator"

    .line 49
    invoke-virtual {v0, p5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p5

    if-nez p5, :cond_0

    .line 50
    new-instance p2, Lcom/cmic/gen/sdk/e/h$1;

    invoke-direct {p2, p0, p1, p4}, Lcom/cmic/gen/sdk/e/h$1;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p2}, Lcom/cmic/gen/sdk/e/n;->a(Lcom/cmic/gen/sdk/e/n$a;)V

    goto :goto_0

    :cond_0
    const-wide/32 p0, 0x36ee80

    cmp-long p4, p2, p0

    if-lez p4, :cond_1

    .line 60
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p2

    add-long/2addr p2, p0

    sput-wide p2, Lcom/cmic/gen/sdk/e/h;->c:J

    goto :goto_0

    .line 62
    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p0

    add-long/2addr p0, p2

    sput-wide p0, Lcom/cmic/gen/sdk/e/h;->c:J

    :cond_2
    :goto_0
    return-void
.end method

.method public static a(ZZ)V
    .locals 2

    .line 20
    invoke-static {}, Lcom/cmic/gen/sdk/e/k;->a()Lcom/cmic/gen/sdk/e/k$a;

    move-result-object v0

    const-string v1, "phonescripstarttime"

    .line 21
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    const-string v1, "phonescripcache"

    .line 22
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    const-string v1, "pre_sim_key"

    .line 23
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    const-string v1, "phonescripversion"

    .line 24
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 26
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/e/k$a;->a()V

    goto :goto_0

    .line 28
    :cond_0
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/e/k$a;->b()V

    :goto_0
    if-eqz p0, :cond_1

    const/4 p0, 0x0

    .line 32
    sput-object p0, Lcom/cmic/gen/sdk/e/h;->a:Ljava/lang/String;

    .line 33
    sput-object p0, Lcom/cmic/gen/sdk/e/h;->b:Ljava/lang/String;

    const-wide/16 p0, 0x0

    .line 34
    sput-wide p0, Lcom/cmic/gen/sdk/e/h;->c:J

    const/4 p0, -0x1

    .line 35
    sput p0, Lcom/cmic/gen/sdk/e/h;->d:I

    :cond_1
    return-void
.end method

.method private static a(J)Z
    .locals 5

    .line 111
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 112
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "PhoneScripUtils"

    invoke-static {v4, v2}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    sub-long/2addr p0, v0

    const-wide/16 v0, 0x2710

    cmp-long v2, p0, v0

    if-lez v2, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static a(Lcom/cmic/gen/sdk/a;)Z
    .locals 4

    const-string v0, "scripKey"

    .line 159
    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/cmic/gen/sdk/e/h;->a(Ljava/lang/String;)I

    move-result v0

    .line 160
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "imsiState"

    invoke-virtual {p0, v2, v1}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 161
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "simState = "

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "PhoneScripUtils"

    invoke-static {v1, p0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    if-nez v0, :cond_0

    return p0

    .line 165
    :cond_0
    sget v2, Lcom/cmic/gen/sdk/e/h;->d:I

    const/4 v3, -0x1

    if-ne v2, v3, :cond_1

    const-string v2, "phonescripversion"

    .line 166
    invoke-static {v2, v3}, Lcom/cmic/gen/sdk/e/k;->a(Ljava/lang/String;I)I

    move-result v2

    sput v2, Lcom/cmic/gen/sdk/e/h;->d:I

    .line 168
    :cond_1
    sget v2, Lcom/cmic/gen/sdk/e/h;->d:I

    const/4 v3, 0x1

    if-eq v2, v3, :cond_2

    .line 170
    invoke-static {v3, p0}, Lcom/cmic/gen/sdk/e/h;->a(ZZ)V

    .line 171
    invoke-static {}, Lcom/cmic/gen/sdk/e/b;->a()V

    const-string v0, "phoneScriptVersion change"

    .line 172
    invoke-static {v1, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    return p0

    :cond_2
    const/4 v1, 0x2

    if-ne v0, v1, :cond_3

    .line 178
    invoke-static {v3, p0}, Lcom/cmic/gen/sdk/e/h;->a(ZZ)V

    return p0

    .line 182
    :cond_3
    invoke-static {}, Lcom/cmic/gen/sdk/e/h;->c()Z

    move-result p0

    return p0
.end method

.method static synthetic b()J
    .locals 2

    .line 9
    sget-wide v0, Lcom/cmic/gen/sdk/e/h;->c:J

    return-wide v0
.end method

.method private static b(Landroid/content/Context;Ljava/lang/String;JLjava/lang/String;)V
    .locals 1

    .line 69
    invoke-static {p0, p1}, Lcom/cmic/gen/sdk/e/b;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 70
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 71
    invoke-static {}, Lcom/cmic/gen/sdk/e/k;->a()Lcom/cmic/gen/sdk/e/k$a;

    move-result-object p1

    const-string v0, "phonescripcache"

    .line 72
    invoke-virtual {p1, v0, p0}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p0, "phonescripstarttime"

    .line 73
    invoke-virtual {p1, p0, p2, p3}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;J)V

    const/4 p0, 0x1

    const-string p2, "phonescripversion"

    .line 74
    invoke-virtual {p1, p2, p0}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;I)V

    const-string p0, "pre_sim_key"

    .line 75
    invoke-virtual {p1, p0, p4}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 76
    invoke-virtual {p1}, Lcom/cmic/gen/sdk/e/k$a;->b()V

    :cond_0
    return-void
.end method

.method private static c()Z
    .locals 4

    .line 100
    sget-object v0, Lcom/cmic/gen/sdk/e/h;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 101
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/cmic/gen/sdk/e/h;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v1, Lcom/cmic/gen/sdk/e/h;->c:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PhoneScripUtils"

    invoke-static {v1, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 102
    sget-wide v0, Lcom/cmic/gen/sdk/e/h;->c:J

    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/h;->a(J)Z

    move-result v0

    return v0

    :cond_0
    const-string v0, "phonescripcache"

    const-string v1, ""

    .line 104
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-wide/16 v1, 0x0

    const-string v3, "phonescripstarttime"

    .line 105
    invoke-static {v3, v1, v2}, Lcom/cmic/gen/sdk/e/k;->a(Ljava/lang/String;J)J

    move-result-wide v1

    .line 106
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {v1, v2}, Lcom/cmic/gen/sdk/e/h;->a(J)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    return v0
.end method
