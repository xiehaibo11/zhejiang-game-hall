.class public Lcom/qq/e/comm/managers/plugin/a;
.super Ljava/lang/Object;
.source ""


# static fields
.field private static a:Ljava/lang/reflect/Method;

.field private static b:Z


# direct methods
.method public static a(Ljava/lang/Throwable;Ljava/lang/String;)V
    .locals 4

    const/4 v0, 0x1

    :try_start_0
    new-instance v1, Ljava/lang/Exception;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u63d2\u4ef6\u9519\u8bef\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1, p0}, Ljava/lang/Exception;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 1
    sget-boolean p0, Lcom/qq/e/comm/managers/plugin/a;->b:Z

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    sget-object p0, Lcom/qq/e/comm/managers/plugin/a;->a:Ljava/lang/reflect/Method;

    const/4 p1, 0x0

    if-nez p0, :cond_1

    const-string p0, "com.tencent.bugly.crashreport.CrashReport"

    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    new-array v2, v0, [Ljava/lang/Class;

    const-class v3, Ljava/lang/Throwable;

    aput-object v3, v2, p1

    const-string v3, "postCatchedException"

    invoke-virtual {p0, v3, v2}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0

    sput-object p0, Lcom/qq/e/comm/managers/plugin/a;->a:Ljava/lang/reflect/Method;

    invoke-virtual {p0, v0}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    :cond_1
    sget-object p0, Lcom/qq/e/comm/managers/plugin/a;->a:Ljava/lang/reflect/Method;

    new-array v2, v0, [Ljava/lang/Object;

    aput-object v1, v2, p1

    const/4 p1, 0x0

    invoke-virtual {p0, p1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 2
    :catchall_0
    sput-boolean v0, Lcom/qq/e/comm/managers/plugin/a;->b:Z

    :goto_0
    return-void
.end method
