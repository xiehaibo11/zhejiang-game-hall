.class public Lcom/kuaishou/weapon/p0/jni/Engine;
.super Ljava/lang/Object;


# static fields
.field private static volatile instance:Lcom/kuaishou/weapon/p0/jni/Engine;

.field public static volatile loadSoCount:I

.field public static volatile loadSuccess:Z

.field public static volatile soPath:Ljava/lang/String;

.field public static volatile soVersion:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static native abc()Ljava/lang/String;
.end method

.method public static native bcd()Ljava/lang/String;
.end method

.method public static getInstance(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/jni/Engine;
    .locals 8

    sget-object v0, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    sget-boolean v0, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-nez v0, :cond_5

    sget-object v0, Lcom/kuaishou/weapon/p0/jni/Engine;->instance:Lcom/kuaishou/weapon/p0/jni/Engine;

    if-nez v0, :cond_5

    const-class v0, Lcom/kuaishou/weapon/p0/jni/Engine;

    monitor-enter v0

    :try_start_0
    const-string v1, "weapon"

    sget-object v2, Lcom/kuaishou/weapon/p0/jni/Engine;->instance:Lcom/kuaishou/weapon/p0/jni/Engine;

    if-nez v2, :cond_0

    new-instance v2, Lcom/kuaishou/weapon/p0/jni/Engine;

    invoke-direct {v2}, Lcom/kuaishou/weapon/p0/jni/Engine;-><init>()V

    sput-object v2, Lcom/kuaishou/weapon/p0/jni/Engine;->instance:Lcom/kuaishou/weapon/p0/jni/Engine;

    :cond_0
    const-string v2, "re_po_rt"

    invoke-static {p0, v2}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v3, 0x0

    :try_start_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    const-string v6, "."

    const-string v7, ""

    invoke-virtual {v5, v6, v7}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ".so"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {p0, v4}, Lcom/kuaishou/weapon/p0/bo;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_1

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v4, "l"

    sget-object v5, Lcom/kuaishou/weapon/p0/cj;->l:Ljava/lang/String;

    invoke-interface {v1, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v4, Lcom/kuaishou/weapon/p0/cj;->a:Ljava/lang/String;

    invoke-static {p0, v4, v1}, Lcom/kuaishou/weapon/p0/bg;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V

    sput-boolean v3, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    sget-object p0, Lcom/kuaishou/weapon/p0/jni/Engine;->instance:Lcom/kuaishou/weapon/p0/jni/Engine;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-object p0

    :cond_1
    :try_start_3
    const-string v4, "plc001_lss_v_s"

    const-string v5, ""

    invoke-virtual {v2, v4, v5}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    sget-object v4, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    const-string v5, "plc001_lss_v_s"

    invoke-virtual {v2, v5, v4, v3}, Lcom/kuaishou/weapon/p0/h;->c(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_2
    const-string v5, "plc001_lps_t_p0"

    invoke-virtual {v2, v5}, Lcom/kuaishou/weapon/p0/h;->c(Ljava/lang/String;)I

    move-result v5

    sput v5, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    sget-object v5, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    invoke-static {v4, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    sget-object v4, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    sput v3, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    const-string v5, "plc001_lss_v_s"

    invoke-virtual {v2, v5, v4, v3}, Lcom/kuaishou/weapon/p0/h;->c(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_3
    sget v4, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    const/4 v5, 0x1

    add-int/2addr v4, v5

    const/16 v6, 0xa

    if-ge v4, v6, :cond_4

    sget v4, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    add-int/2addr v4, v5

    sput v4, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    const-string v4, "plc001_lps_t_p0"

    sget v6, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    invoke-virtual {v2, v4, v6}, Lcom/kuaishou/weapon/p0/h;->d(Ljava/lang/String;I)V

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    const-string v6, "."

    const-string v7, ""

    invoke-virtual {v1, v6, v7}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    invoke-static {}, Lcom/kuaishou/weapon/p0/jni/Engine;->bcd()Ljava/lang/String;

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v4, "c"

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    sget v7, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v1, v4, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "v"

    sget-object v6, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    invoke-interface {v1, v4, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "l"

    const-string v6, "s"

    invoke-interface {v1, v4, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "1003001"

    invoke-static {p0, v4, v1}, Lcom/kuaishou/weapon/p0/bg;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V

    sput v3, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    sput-boolean v5, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_4
    sput-boolean v3, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :try_start_5
    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    const-string v4, "e"

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v3, v4, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "v"

    sget-object v4, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    invoke-interface {v3, v1, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "l"

    sget-object v4, Lcom/kuaishou/weapon/p0/cj;->k:Ljava/lang/String;

    invoke-interface {v3, v1, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v1, Lcom/kuaishou/weapon/p0/cj;->a:Ljava/lang/String;

    invoke-static {p0, v1, v3}, Lcom/kuaishou/weapon/p0/bg;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catch_0
    :cond_4
    :goto_0
    :try_start_6
    const-string p0, "plc001_lps_t_p0"

    sget v1, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    invoke-virtual {v2, p0, v1}, Lcom/kuaishou/weapon/p0/h;->d(Ljava/lang/String;I)V

    monitor-exit v0

    goto :goto_1

    :catchall_1
    move-exception p0

    monitor-exit v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    throw p0

    :cond_5
    :goto_1
    sget-object p0, Lcom/kuaishou/weapon/p0/jni/Engine;->instance:Lcom/kuaishou/weapon/p0/jni/Engine;

    return-object p0
.end method

.method public static native mmo(Ljava/lang/reflect/Member;II)I
.end method

.method public static native mqc(Ljava/lang/reflect/Member;I)I
.end method

.method public static native off()I
.end method

.method public static native tao(IJLjava/lang/Object;)Ljava/lang/String;
.end method


# virtual methods
.method public native ac([B[B)[B
.end method

.method public native ar([B[B)[B
.end method

.method public native cde()Ljava/lang/String;
.end method

.method public native dc([B[B)[B
.end method

.method public native def()Ljava/lang/String;
.end method

.method public native dr([B[B)[B
.end method

.method public native efg()Ljava/lang/String;
.end method

.method public native eopq(IIILjava/lang/String;)Ljava/lang/String;
.end method

.method public native fgh()Ljava/lang/String;
.end method

.method public native ghi()Ljava/lang/String;
.end method

.method public native hij()Ljava/lang/String;
.end method

.method public native klm(ILjava/lang/String;)Ljava/lang/String;
.end method

.method public native nop()Ljava/lang/String;
.end method

.method public native pqr(IIILjava/lang/String;)Ljava/lang/String;
.end method

.method public native qrs()Ljava/lang/String;
.end method

.method public native stu(IIIILjava/lang/String;)Ljava/lang/String;
.end method
