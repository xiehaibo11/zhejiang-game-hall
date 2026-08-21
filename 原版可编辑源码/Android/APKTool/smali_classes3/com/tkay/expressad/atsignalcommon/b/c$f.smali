.class public final Lcom/tkay/expressad/atsignalcommon/b/c$f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/atsignalcommon/b/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "f"
.end annotation


# instance fields
.field protected final a:Ljava/lang/reflect/Method;


# direct methods
.method constructor <init>(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;I)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/Class<",
            "*>;I)V"
        }
    .end annotation

    .line 149
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 162
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/b/c$f;->a:Ljava/lang/reflect/Method;

    return-void

    .line 153
    :cond_0
    :try_start_0
    invoke-virtual {p1, p2, p3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    if-lez p4, :cond_1

    .line 154
    invoke-virtual {v0}, Ljava/lang/reflect/Method;->getModifiers()I

    move-result p3

    and-int/2addr p3, p4

    if-eq p3, p4, :cond_1

    .line 155
    new-instance p3, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, " does not match modifiers: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-direct {p3, p4}, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;-><init>(Ljava/lang/String;)V

    invoke-static {p3}, Lcom/tkay/expressad/atsignalcommon/b/c;->a(Lcom/tkay/expressad/atsignalcommon/b/c$b$a;)V

    :cond_1
    const/4 p3, 0x1

    .line 156
    invoke-virtual {v0, p3}, Ljava/lang/reflect/Method;->setAccessible(Z)V
    :try_end_0
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 162
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/b/c$f;->a:Ljava/lang/reflect/Method;

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p3

    .line 158
    :try_start_1
    new-instance p4, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;

    invoke-direct {p4, p3}, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;-><init>(Ljava/lang/Exception;)V

    .line 159
    invoke-virtual {p4, p1}, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;->a(Ljava/lang/Class;)V

    .line 160
    invoke-virtual {p4, p2}, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;->a(Ljava/lang/String;)V

    .line 161
    invoke-static {p4}, Lcom/tkay/expressad/atsignalcommon/b/c;->a(Lcom/tkay/expressad/atsignalcommon/b/c$b$a;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 162
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/b/c$f;->a:Ljava/lang/reflect/Method;

    return-void

    :goto_0
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/b/c$f;->a:Ljava/lang/reflect/Method;

    throw p1
.end method


# virtual methods
.method public final varargs a(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1

    .line 141
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/b/c$f;->a:Ljava/lang/reflect/Method;

    invoke-virtual {v0, p1, p2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 144
    invoke-virtual {p1}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public final a()Ljava/lang/reflect/Method;
    .locals 1

    .line 168
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/b/c$f;->a:Ljava/lang/reflect/Method;

    return-object v0
.end method
