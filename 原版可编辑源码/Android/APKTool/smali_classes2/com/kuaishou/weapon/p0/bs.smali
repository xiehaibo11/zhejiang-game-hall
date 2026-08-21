.class public Lcom/kuaishou/weapon/p0/bs;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(I)Ljava/lang/String;
    .locals 7

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v1, 0x3

    if-ge p0, v1, :cond_0

    move p0, v1

    :cond_0
    new-instance v2, Ljava/security/SecureRandom;

    invoke-direct {v2}, Ljava/security/SecureRandom;-><init>()V

    const/4 v3, 0x0

    :goto_0
    if-ge v3, p0, :cond_4

    invoke-virtual {v2, v1}, Ljava/util/Random;->nextInt(I)I

    move-result v4

    if-eqz v4, :cond_3

    const/16 v5, 0x19

    const/4 v6, 0x1

    if-eq v4, v6, :cond_2

    const/4 v6, 0x2

    if-eq v4, v6, :cond_1

    goto :goto_2

    :cond_1
    invoke-virtual {v2, v5}, Ljava/util/Random;->nextInt(I)I

    move-result v4

    add-int/lit8 v4, v4, 0x61

    goto :goto_1

    :cond_2
    invoke-virtual {v2, v5}, Ljava/util/Random;->nextInt(I)I

    move-result v4

    add-int/lit8 v4, v4, 0x41

    :goto_1
    int-to-char v4, v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_3
    const/16 v4, 0xa

    invoke-virtual {v2, v4}, Ljava/util/Random;->nextInt(I)I

    move-result v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    :goto_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_4
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static declared-synchronized a(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    const-class v0, Lcom/kuaishou/weapon/p0/bs;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kuaishou/weapon/p0/bs;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    sget-object p0, Lcom/kuaishou/weapon/p0/bs;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_0
    :try_start_1
    const-string v1, "re_po_rt"

    invoke-static {p0, v1}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v1

    const-string v2, "a1_p_s_p_s"

    invoke-virtual {v1, v2}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v2

    const-string v3, "a1_p_s_p_s_c_b"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v1

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v3

    invoke-static {p0, v3}, Lcom/kuaishou/weapon/p0/bt;->a(Landroid/content/Context;Lcom/kuaishou/weapon/p0/df;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    sput-object v3, Lcom/kuaishou/weapon/p0/bs;->a:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object v3

    :cond_1
    :try_start_2
    const-string v3, ""

    const-string v4, ""

    if-nez v2, :cond_2

    if-eqz v1, :cond_3

    :cond_2
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/bg;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/bg;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    :cond_3
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "RISK"

    invoke-virtual {v3, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_4

    goto :goto_0

    :cond_4
    move-object v1, v3

    goto :goto_1

    :cond_5
    :goto_0
    const-string v1, "0"

    :goto_1
    invoke-static {p0, v3, v4}, Lcom/kuaishou/weapon/p0/bs;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuffer;

    invoke-direct {v3, v1}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/lang/StringBuffer;->reverse()Ljava/lang/StringBuffer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/kuaishou/weapon/p0/bm;

    invoke-direct {v2, p0}, Lcom/kuaishou/weapon/p0/bm;-><init>(Landroid/content/Context;)V

    const-string v3, "OTUzc3E1N0w5NTIzMW80OUQxMGo3R1dFa0ZiandHT0w="

    invoke-virtual {v2, v1, v3}, Lcom/kuaishou/weapon/p0/bm;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v2

    invoke-static {v1, p0, v2}, Lcom/kuaishou/weapon/p0/bt;->a(Ljava/lang/String;Landroid/content/Context;Lcom/kuaishou/weapon/p0/df;)V

    sput-object v1, Lcom/kuaishou/weapon/p0/bs;->a:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    :cond_6
    :try_start_3
    const-string p0, ""
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    monitor-exit v0

    return-object p0

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    :try_start_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v1

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_0
    move-object p0, v0

    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    move-object v0, p0

    :catchall_0
    :goto_1
    return-object v0
.end method
