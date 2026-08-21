.class public Lcom/bianfeng/utilslib/ActivityHookUtils;
.super Ljava/lang/Object;
.source "ActivityHookUtils.java"


# static fields
.field private static utils:Lcom/bianfeng/utilslib/ActivityHookUtils;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private fixOrientation(Landroid/app/Activity;)V
    .locals 2

    .line 37
    :try_start_0
    const-class v0, Landroid/app/Activity;

    const-string v1, "mActivityInfo"

    .line 38
    invoke-virtual {v0, v1}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    const/4 v1, 0x1

    .line 39
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 40
    invoke-virtual {v0, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/pm/ActivityInfo;

    const/4 v0, -0x1

    .line 42
    iput v0, p1, Landroid/content/pm/ActivityInfo;->screenOrientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 44
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/ActivityHookUtils;
    .locals 1

    .line 16
    sget-object v0, Lcom/bianfeng/utilslib/ActivityHookUtils;->utils:Lcom/bianfeng/utilslib/ActivityHookUtils;

    if-nez v0, :cond_0

    .line 17
    new-instance v0, Lcom/bianfeng/utilslib/ActivityHookUtils;

    invoke-direct {v0}, Lcom/bianfeng/utilslib/ActivityHookUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/utilslib/ActivityHookUtils;->utils:Lcom/bianfeng/utilslib/ActivityHookUtils;

    .line 19
    :cond_0
    sget-object v0, Lcom/bianfeng/utilslib/ActivityHookUtils;->utils:Lcom/bianfeng/utilslib/ActivityHookUtils;

    return-object v0
.end method

.method private isTranslucentOrFloating(Landroid/app/Activity;)Z
    .locals 7

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "com.android.internal.R$styleable"

    .line 57
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "Window"

    .line 58
    invoke-virtual {v1, v2}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    const/4 v2, 0x1

    .line 59
    invoke-virtual {v1, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    const/4 v3, 0x0

    .line 60
    invoke-virtual {v1, v3}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [I

    check-cast v1, [I

    .line 62
    invoke-virtual {p1, v1}, Landroid/app/Activity;->obtainStyledAttributes([I)Landroid/content/res/TypedArray;

    move-result-object p1

    .line 63
    const-class v1, Landroid/content/pm/ActivityInfo;

    const-string v4, "isTranslucentOrFloating"

    new-array v5, v2, [Ljava/lang/Class;

    .line 65
    const-class v6, Landroid/content/res/TypedArray;

    aput-object v6, v5, v0

    invoke-virtual {v1, v4, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    .line 66
    invoke-virtual {v1, v2}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p1, v2, v0

    .line 67
    invoke-virtual {v1, v3, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 69
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u6d4b\u8bd5------"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return v0
.end method


# virtual methods
.method public hookOrientation(Landroid/app/Activity;)V
    .locals 2

    .line 23
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1a

    if-ne v0, v1, :cond_0

    .line 24
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/ActivityHookUtils;->isTranslucentOrFloating(Landroid/app/Activity;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 25
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/ActivityHookUtils;->fixOrientation(Landroid/app/Activity;)V

    :cond_0
    return-void
.end method
