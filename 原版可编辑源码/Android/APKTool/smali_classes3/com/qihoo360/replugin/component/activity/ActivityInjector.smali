.class public Lcom/qihoo360/replugin/component/activity/ActivityInjector;
.super Ljava/lang/Object;
.source "ActivityInjector.java"


# static fields
.field public static final TAG:Ljava/lang/String; = "activity-injector"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static getIcon(Landroid/app/Activity;Landroid/content/pm/ActivityInfo;)Landroid/graphics/Bitmap;
    .locals 1

    .line 173
    invoke-virtual {p0}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    .line 176
    iget v0, p1, Landroid/content/pm/ActivityInfo;->icon:I

    invoke-static {p0, v0}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->getIconById(Landroid/content/res/Resources;I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-nez v0, :cond_0

    .line 180
    iget-object p1, p1, Landroid/content/pm/ActivityInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget p1, p1, Landroid/content/pm/ApplicationInfo;->icon:I

    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->getIconById(Landroid/content/res/Resources;I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    :cond_0
    if-nez v0, :cond_1

    .line 185
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object p0

    .line 186
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 187
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    .line 188
    iget p0, p0, Landroid/content/pm/ApplicationInfo;->icon:I

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->getIconById(Landroid/content/res/Resources;I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    :cond_1
    const/4 p0, 0x0

    .line 192
    instance-of p1, v0, Landroid/graphics/drawable/BitmapDrawable;

    if-eqz p1, :cond_2

    .line 193
    check-cast v0, Landroid/graphics/drawable/BitmapDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/BitmapDrawable;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p0

    .line 196
    :cond_2
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_3

    .line 197
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "bitmap = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "activity-injector"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-object p0
.end method

.method private static getIconById(Landroid/content/res/Resources;I)Landroid/graphics/drawable/Drawable;
    .locals 1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 207
    :cond_0
    :try_start_0
    invoke-virtual {p0, p1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p0
    :try_end_0
    .catch Landroid/content/res/Resources$NotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 209
    invoke-virtual {p0}, Landroid/content/res/Resources$NotFoundException;->printStackTrace()V

    return-object v0
.end method

.method private static getLabel(Landroid/app/Activity;Landroid/content/pm/ActivityInfo;)Ljava/lang/String;
    .locals 2

    .line 132
    invoke-virtual {p0}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    .line 135
    iget v0, p1, Landroid/content/pm/ActivityInfo;->labelRes:I

    invoke-static {p0, v0}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->getLabelById(Landroid/content/res/Resources;I)Ljava/lang/String;

    move-result-object v0

    .line 138
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 139
    iget-object p1, p1, Landroid/content/pm/ActivityInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget p1, p1, Landroid/content/pm/ApplicationInfo;->labelRes:I

    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->getLabelById(Landroid/content/res/Resources;I)Ljava/lang/String;

    move-result-object v0

    .line 143
    :cond_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 144
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object p0

    .line 145
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 146
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    .line 147
    iget p0, p0, Landroid/content/pm/ApplicationInfo;->labelRes:I

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->getLabelById(Landroid/content/res/Resources;I)Ljava/lang/String;

    move-result-object v0

    .line 150
    :cond_1
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_2

    .line 151
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "label = "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "activity-injector"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-object v0
.end method

.method private static getLabelById(Landroid/content/res/Resources;I)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 161
    :cond_0
    :try_start_0
    invoke-virtual {p0, p1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Landroid/content/res/Resources$NotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 163
    invoke-virtual {p0}, Landroid/content/res/Resources$NotFoundException;->printStackTrace()V

    return-object v0
.end method

.method private static inject(Landroid/app/Activity;Landroid/content/pm/ActivityInfo;I)Z
    .locals 1

    const/4 v0, 0x4

    if-lt p2, v0, :cond_0

    .line 77
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->injectTaskDescription(Landroid/app/Activity;Landroid/content/pm/ActivityInfo;)V

    :cond_0
    const/4 p0, 0x1

    return p0
.end method

.method public static inject(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    .line 60
    invoke-static {p1, v0}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v1

    if-nez v1, :cond_0

    return v0

    .line 64
    :cond_0
    invoke-static {p1}, Lcom/qihoo360/replugin/RePlugin;->fetchComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object p1

    if-nez p1, :cond_1

    return v0

    .line 69
    :cond_1
    invoke-virtual {p1, p2}, Lcom/qihoo360/replugin/component/ComponentList;->getActivity(Ljava/lang/String;)Landroid/content/pm/ActivityInfo;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 70
    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result p2

    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->inject(Landroid/app/Activity;Landroid/content/pm/ActivityInfo;I)Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 v0, 0x1

    :cond_2
    return v0
.end method

.method private static injectTaskDescription(Landroid/app/Activity;Landroid/content/pm/ActivityInfo;)V
    .locals 3

    .line 89
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_0

    return-void

    :cond_0
    if-eqz p0, :cond_6

    if-nez p1, :cond_1

    goto :goto_1

    .line 97
    :cond_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "activity-injector"

    if-eqz v0, :cond_2

    .line 98
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "activity = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 99
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ai = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 103
    :cond_2
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->getLabel(Landroid/app/Activity;Landroid/content/pm/ActivityInfo;)Ljava/lang/String;

    move-result-object v0

    .line 105
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    return-void

    .line 110
    :cond_3
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->getIcon(Landroid/app/Activity;Landroid/content/pm/ActivityInfo;)Landroid/graphics/Bitmap;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 115
    new-instance v2, Landroid/app/ActivityManager$TaskDescription;

    invoke-direct {v2, v0, p1}, Landroid/app/ActivityManager$TaskDescription;-><init>(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    goto :goto_0

    .line 117
    :cond_4
    new-instance v2, Landroid/app/ActivityManager$TaskDescription;

    invoke-direct {v2, v0}, Landroid/app/ActivityManager$TaskDescription;-><init>(Ljava/lang/String;)V

    .line 120
    :goto_0
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_5

    .line 121
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "td = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 124
    :cond_5
    invoke-virtual {p0, v2}, Landroid/app/Activity;->setTaskDescription(Landroid/app/ActivityManager$TaskDescription;)V

    :cond_6
    :goto_1
    return-void
.end method
