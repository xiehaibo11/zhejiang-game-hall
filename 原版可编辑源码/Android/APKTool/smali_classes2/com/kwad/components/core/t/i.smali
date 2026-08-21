.class public final Lcom/kwad/components/core/t/i;
.super Ljava/lang/Object;


# static fields
.field private static Rm:Ljava/lang/reflect/Method;

.field private static Rn:Ljava/lang/reflect/Method;

.field private static Ro:Ljava/lang/reflect/Field;

.field private static SYSTEM_UI_FLAG_LIGHT_STATUS_BAR:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    const-string v0, "setStatusBarDarkIcon"

    const/4 v1, 0x0

    const/4 v2, 0x1

    :try_start_0
    const-class v3, Landroid/app/Activity;

    new-array v4, v2, [Ljava/lang/Class;

    sget-object v5, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v5, v4, v1

    invoke-virtual {v3, v0, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    sput-object v3, Lcom/kwad/components/core/t/i;->Rm:Ljava/lang/reflect/Method;
    :try_end_0
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    invoke-virtual {v3}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    :goto_0
    :try_start_1
    const-class v3, Landroid/app/Activity;

    new-array v2, v2, [Ljava/lang/Class;

    sget-object v4, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v4, v2, v1

    invoke-virtual {v3, v0, v2}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    sput-object v0, Lcom/kwad/components/core/t/i;->Rn:Ljava/lang/reflect/Method;
    :try_end_1
    .catch Ljava/lang/NoSuchMethodException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    :goto_1
    :try_start_2
    const-class v0, Landroid/view/WindowManager$LayoutParams;

    const-string v1, "statusBarColor"

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    sput-object v0, Lcom/kwad/components/core/t/i;->Ro:Ljava/lang/reflect/Field;
    :try_end_2
    .catch Ljava/lang/NoSuchFieldException; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catch_2
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/NoSuchFieldException;->printStackTrace()V

    :goto_2
    :try_start_3
    const-class v0, Landroid/view/View;

    const-string v1, "SYSTEM_UI_FLAG_LIGHT_STATUS_BAR"

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/s;->c(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/kwad/components/core/t/i;->SYSTEM_UI_FLAG_LIGHT_STATUS_BAR:I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    return-void

    :catch_3
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private static a(Landroid/app/Activity;ZZ)V
    .locals 2

    sget-object p2, Lcom/kwad/components/core/t/i;->Rn:Ljava/lang/reflect/Method;

    if-eqz p2, :cond_0

    const/4 v0, 0x1

    :try_start_0
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    aput-object p1, v0, v1

    invoke-virtual {p2, p0, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    return-void

    :catch_1
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    return-void

    :cond_0
    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/kwad/components/core/t/i;->a(Landroid/view/Window;Z)V

    return-void
.end method

.method private static a(Landroid/view/Window;Z)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-ge v0, v1, :cond_0

    invoke-virtual {p0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p0

    const-string v0, "MEIZU_FLAG_DARK_STATUS_BAR_ICON"

    invoke-static {p0, v0, p1}, Lcom/kwad/components/core/t/i;->a(Landroid/view/WindowManager$LayoutParams;Ljava/lang/String;Z)Z

    return-void

    :cond_0
    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {v0, p1}, Lcom/kwad/components/core/t/i;->g(Landroid/view/View;Z)V

    const/4 p1, 0x0

    invoke-static {p0, p1}, Lcom/kwad/components/core/t/i;->setStatusBarColor(Landroid/view/Window;I)V

    :cond_1
    return-void
.end method

.method private static a(Landroid/view/WindowManager$LayoutParams;Ljava/lang/String;Z)Z
    .locals 2

    const-string v0, "meizuFlags"

    :try_start_0
    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-eqz p2, :cond_0

    or-int/2addr p1, v1

    goto :goto_0

    :cond_0
    not-int p1, p1

    and-int/2addr p1, v1

    :goto_0
    if-eq v1, p1, :cond_1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-static {p0, v0, p1}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method public static b(Landroid/app/Activity;Z)V
    .locals 0

    const/4 p1, 0x1

    invoke-static {p0, p1, p1}, Lcom/kwad/components/core/t/i;->a(Landroid/app/Activity;ZZ)V

    return-void
.end method

.method private static g(Landroid/view/View;Z)V
    .locals 1

    invoke-virtual {p0}, Landroid/view/View;->getSystemUiVisibility()I

    move-result v0

    if-eqz p1, :cond_0

    sget p1, Lcom/kwad/components/core/t/i;->SYSTEM_UI_FLAG_LIGHT_STATUS_BAR:I

    or-int/2addr p1, v0

    goto :goto_0

    :cond_0
    sget p1, Lcom/kwad/components/core/t/i;->SYSTEM_UI_FLAG_LIGHT_STATUS_BAR:I

    not-int p1, p1

    and-int/2addr p1, v0

    :goto_0
    if-eq p1, v0, :cond_1

    invoke-virtual {p0, p1}, Landroid/view/View;->setSystemUiVisibility(I)V

    :cond_1
    return-void
.end method

.method private static setStatusBarColor(Landroid/view/Window;I)V
    .locals 2

    invoke-virtual {p0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p1

    sget-object v0, Lcom/kwad/components/core/t/i;->Ro:Ljava/lang/reflect/Field;

    if-eqz v0, :cond_1

    :try_start_0
    invoke-virtual {v0, p1}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/kwad/components/core/t/i;->Ro:Ljava/lang/reflect/Field;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    invoke-virtual {p0, p1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    :cond_1
    return-void
.end method
