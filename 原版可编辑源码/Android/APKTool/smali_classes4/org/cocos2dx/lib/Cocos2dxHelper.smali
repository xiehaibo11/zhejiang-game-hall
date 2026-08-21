.class public Lorg/cocos2dx/lib/Cocos2dxHelper;
.super Ljava/lang/Object;
.source "Cocos2dxHelper.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;
    }
.end annotation


# static fields
.field private static final BOOST_TIME:I = 0x7

.field private static final PREFS_NAME:Ljava/lang/String; = "Cocos2dxPrefsFile"

.field private static final RUNNABLES_PER_FRAME:I = 0x5

.field private static final TAG:Ljava/lang/String; = "Cocos2dxHelper"

.field private static connection:Landroid/content/ServiceConnection;

.field private static mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

.field private static onActivityResultListeners:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Landroid/preference/PreferenceManager$OnActivityResultListener;",
            ">;"
        }
    .end annotation
.end field

.field private static sAccelerometerEnabled:Z

.field private static sActivity:Landroid/app/Activity;

.field private static sActivityVisible:Z

.field private static sAssetManager:Landroid/content/res/AssetManager;

.field private static sAssetsPath:Ljava/lang/String;

.field private static sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

.field private static sCocos2dSound:Lorg/cocos2dx/lib/Cocos2dxSound;

.field private static sCocos2dxAccelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

.field private static sCocos2dxHelperListener:Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;

.field private static sCompassEnabled:Z

.field private static sInited:Z

.field private static sOBBFile:Lcom/android/vending/expansion/zipfile/ZipResourceFile;

.field private static sPackageName:Ljava/lang/String;

.field private static sVibrateService:Landroid/os/Vibrator;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 99
    new-instance v0, Ljava/util/LinkedHashSet;

    invoke-direct {v0}, Ljava/util/LinkedHashSet;-><init>()V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->onActivityResultListeners:Ljava/util/Set;

    const/4 v0, 0x0

    .line 100
    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sVibrateService:Landroid/os/Vibrator;

    .line 102
    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    const-string v1, ""

    .line 107
    sput-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAssetsPath:Ljava/lang/String;

    .line 110
    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sOBBFile:Lcom/android/vending/expansion/zipfile/ZipResourceFile;

    const/4 v0, 0x0

    .line 120
    sput-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sInited:Z

    .line 231
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxHelper$2;

    invoke-direct {v0}, Lorg/cocos2dx/lib/Cocos2dxHelper$2;-><init>()V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->connection:Landroid/content/ServiceConnection;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 77
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$002(Lcom/enhance/gameservice/IGameTuningService;)Lcom/enhance/gameservice/IGameTuningService;
    .locals 0

    .line 77
    sput-object p0, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    return-object p0
.end method

.method static synthetic access$100()Landroid/content/ServiceConnection;
    .locals 1

    .line 77
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->connection:Landroid/content/ServiceConnection;

    return-object v0
.end method

.method static synthetic access$200()Landroid/app/Activity;
    .locals 1

    .line 77
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    return-object v0
.end method

.method static synthetic access$300([B)V
    .locals 0

    .line 77
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxHelper;->nativeSetEditTextDialogResult([B)V

    return-void
.end method

.method public static addOnActivityResultListener(Landroid/preference/PreferenceManager$OnActivityResultListener;)V
    .locals 1

    .line 248
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->onActivityResultListeners:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static conversionEncoding([BLjava/lang/String;Ljava/lang/String;)[B
    .locals 1

    .line 683
    :try_start_0
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p0, p1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 684
    invoke-virtual {v0, p2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 686
    invoke-virtual {p0}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static deleteValueForKey(Ljava/lang/String;)V
    .locals 3

    .line 674
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const-string v1, "Cocos2dxPrefsFile"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 675
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 676
    invoke-interface {v0, p0}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 677
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public static disableAccelerometer()V
    .locals 1

    const/4 v0, 0x0

    .line 311
    sput-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAccelerometerEnabled:Z

    .line 312
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->disable()V

    return-void
.end method

.method public static enableAccelerometer()V
    .locals 1

    const/4 v0, 0x1

    .line 297
    sput-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAccelerometerEnabled:Z

    .line 298
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->enableAccel()V

    return-void
.end method

.method public static enableCompass()V
    .locals 1

    const/4 v0, 0x1

    .line 302
    sput-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCompassEnabled:Z

    .line 303
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->enableCompass()V

    return-void
.end method

.method public static end()V
    .locals 1

    .line 457
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->end()V

    .line 458
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->end()V

    return-void
.end method

.method public static fastLoading(I)I
    .locals 2

    const/4 v0, -0x1

    .line 729
    :try_start_0
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    if-eqz v1, :cond_0

    .line 730
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    invoke-interface {v1, p0}, Lcom/enhance/gameservice/IGameTuningService;->boostUp(I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :cond_0
    return v0

    :catch_0
    move-exception p0

    .line 734
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static getAccelValue()[F
    .locals 1

    .line 859
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    move-result-object v0

    iget-object v0, v0, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->accelerometerValues:[F

    return-object v0
.end method

.method private static getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;
    .locals 2

    .line 871
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dxAccelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    if-nez v0, :cond_0

    .line 872
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;-><init>(Landroid/content/Context;)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dxAccelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    .line 874
    :cond_0
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dxAccelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    return-object v0
.end method

.method public static getActivity()Landroid/app/Activity;
    .locals 1

    .line 244
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    return-object v0
.end method

.method public static getAssetManager()Landroid/content/res/AssetManager;
    .locals 1

    .line 293
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAssetManager:Landroid/content/res/AssetManager;

    return-object v0
.end method

.method public static getAssetsPath()Ljava/lang/String;
    .locals 4

    .line 186
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAssetsPath:Ljava/lang/String;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 188
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/Android/obb/"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lorg/cocos2dx/lib/Cocos2dxHelper;->sPackageName:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 191
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    new-instance v3, Lorg/cocos2dx/lib/Cocos2dxHelper$1;

    invoke-direct {v3}, Lorg/cocos2dx/lib/Cocos2dxHelper$1;-><init>()V

    invoke-virtual {v2, v3}, Ljava/io/File;->list(Ljava/io/FilenameFilter;)[Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 198
    array-length v3, v2

    if-lez v3, :cond_0

    .line 199
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v0, 0x0

    aget-object v0, v2, v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 201
    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 202
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 203
    sput-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAssetsPath:Ljava/lang/String;

    goto :goto_0

    .line 205
    :cond_1
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAssetsPath:Ljava/lang/String;

    .line 208
    :cond_2
    :goto_0
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAssetsPath:Ljava/lang/String;

    return-object v0
.end method

.method public static getBackgroundMusicVolume()F
    .locals 1

    .line 400
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->getBackgroundVolume()F

    move-result v0

    return v0
.end method

.method public static getBoolForKey(Ljava/lang/String;Z)Z
    .locals 3

    .line 536
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const/4 v1, 0x0

    const-string v2, "Cocos2dxPrefsFile"

    invoke-virtual {v0, v2, v1}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 538
    :try_start_0
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception v2

    .line 541
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 543
    invoke-interface {v0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v0

    .line 544
    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    .line 545
    instance-of v0, p0, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 547
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result p0

    return p0

    .line 549
    :cond_0
    instance-of v0, p0, Ljava/lang/Integer;

    const/4 v2, 0x1

    if-eqz v0, :cond_2

    .line 551
    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    if-eqz p0, :cond_1

    const/4 v1, 0x1

    :cond_1
    return v1

    .line 554
    :cond_2
    instance-of v0, p0, Ljava/lang/Float;

    if-eqz v0, :cond_4

    .line 556
    check-cast p0, Ljava/lang/Float;

    invoke-virtual {p0}, Ljava/lang/Float;->floatValue()F

    move-result p0

    const/4 p1, 0x0

    cmpl-float p0, p0, p1

    if-eqz p0, :cond_3

    const/4 v1, 0x1

    :cond_3
    return v1

    :cond_4
    return p1
.end method

.method public static getCocos2dxPackageName()Ljava/lang/String;
    .locals 1

    .line 278
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sPackageName:Ljava/lang/String;

    return-object v0
.end method

.method public static getCocos2dxWritablePath()Ljava/lang/String;
    .locals 1

    .line 281
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getCompassValue()[F
    .locals 1

    .line 863
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    move-result-object v0

    iget-object v0, v0, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->compassFieldValues:[F

    return-object v0
.end method

.method public static getCurrentLanguage()Ljava/lang/String;
    .locals 1

    .line 285
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDPI()I
    .locals 2

    .line 514
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 516
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    .line 517
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 520
    invoke-interface {v1}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 523
    invoke-virtual {v1, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 524
    iget v0, v0, Landroid/util/DisplayMetrics;->density:F

    const/high16 v1, 0x43200000    # 160.0f

    mul-float v0, v0, v1

    float-to-int v0, v0

    return v0

    :cond_0
    const/4 v0, -0x1

    return v0
.end method

.method public static getDeviceModel()Ljava/lang/String;
    .locals 1

    .line 289
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    return-object v0
.end method

.method public static getDoubleForKey(Ljava/lang/String;D)D
    .locals 0

    double-to-float p1, p1

    .line 622
    invoke-static {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getFloatForKey(Ljava/lang/String;F)F

    move-result p0

    float-to-double p0, p0

    return-wide p0
.end method

.method public static getEffectsVolume()F
    .locals 1

    .line 428
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->getEffectsVolume()F

    move-result v0

    return v0
.end method

.method public static getFloatForKey(Ljava/lang/String;F)F
    .locals 3

    .line 593
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const-string v1, "Cocos2dxPrefsFile"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 595
    :try_start_0
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences;->getFloat(Ljava/lang/String;F)F

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception v1

    .line 598
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 600
    invoke-interface {v0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v0

    .line 601
    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    .line 602
    instance-of v0, p0, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 603
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result p0

    return p0

    .line 605
    :cond_0
    instance-of v0, p0, Ljava/lang/Integer;

    if-eqz v0, :cond_1

    .line 607
    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->floatValue()F

    move-result p0

    return p0

    .line 609
    :cond_1
    instance-of v0, p0, Ljava/lang/Boolean;

    if-eqz v0, :cond_2

    .line 611
    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    if-eqz p0, :cond_2

    const/high16 p0, 0x3f800000    # 1.0f

    return p0

    :cond_2
    return p1
.end method

.method public static getIntegerForKey(Ljava/lang/String;I)I
    .locals 3

    .line 565
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const-string v1, "Cocos2dxPrefsFile"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 567
    :try_start_0
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception v1

    .line 570
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 572
    invoke-interface {v0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v0

    .line 573
    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    .line 574
    instance-of v0, p0, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 575
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    return p0

    .line 577
    :cond_0
    instance-of v0, p0, Ljava/lang/Float;

    if-eqz v0, :cond_1

    .line 579
    check-cast p0, Ljava/lang/Float;

    invoke-virtual {p0}, Ljava/lang/Float;->intValue()I

    move-result p0

    return p0

    .line 581
    :cond_1
    instance-of v0, p0, Ljava/lang/Boolean;

    if-eqz v0, :cond_2

    .line 583
    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p0, 0x1

    return p0

    :cond_2
    return p1
.end method

.method public static getObbAssetFileDescriptor(Ljava/lang/String;)[J
    .locals 6

    const/4 v0, 0x3

    .line 345
    new-array v0, v0, [J

    .line 346
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getObbFile()Lcom/android/vending/expansion/zipfile/ZipResourceFile;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 347
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getObbFile()Lcom/android/vending/expansion/zipfile/ZipResourceFile;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/android/vending/expansion/zipfile/ZipResourceFile;->getAssetFileDescriptor(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 350
    :try_start_0
    invoke-virtual {p0}, Landroid/content/res/AssetFileDescriptor;->getParcelFileDescriptor()Landroid/os/ParcelFileDescriptor;

    move-result-object v1

    .line 351
    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-string v3, "getFd"

    const/4 v4, 0x0

    new-array v5, v4, [Ljava/lang/Class;

    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    .line 352
    new-array v3, v4, [Ljava/lang/Object;

    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    int-to-long v1, v1

    aput-wide v1, v0, v4

    const/4 v1, 0x1

    .line 353
    invoke-virtual {p0}, Landroid/content/res/AssetFileDescriptor;->getStartOffset()J

    move-result-wide v2

    aput-wide v2, v0, v1

    const/4 v1, 0x2

    .line 354
    invoke-virtual {p0}, Landroid/content/res/AssetFileDescriptor;->getLength()J

    move-result-wide v2

    aput-wide v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 360
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->TAG:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/reflect/InvocationTargetException;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :catch_1
    move-exception p0

    .line 358
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->TAG:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/IllegalAccessException;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 356
    :catch_2
    sget-object p0, Lorg/cocos2dx/lib/Cocos2dxHelper;->TAG:Ljava/lang/String;

    const-string v1, "Accessing file descriptor directly from the OBB is only supported from Android 3.1 (API level 12) and above."

    invoke-static {p0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    :goto_0
    return-object v0
.end method

.method public static getObbFile()Lcom/android/vending/expansion/zipfile/ZipResourceFile;
    .locals 4

    .line 212
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sOBBFile:Lcom/android/vending/expansion/zipfile/ZipResourceFile;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 215
    :try_start_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getCocos2dxPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v2

    iget v0, v2, Landroid/content/pm/PackageInfo;->versionCode:I
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 217
    invoke-virtual {v2}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    .line 221
    :goto_0
    :try_start_1
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v0, v1}, Lcom/android/vending/expansion/zipfile/APKExpansionSupport;->getAPKExpansionZipFile(Landroid/content/Context;II)Lcom/android/vending/expansion/zipfile/ZipResourceFile;

    move-result-object v0

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sOBBFile:Lcom/android/vending/expansion/zipfile/ZipResourceFile;
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 223
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 227
    :cond_0
    :goto_1
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sOBBFile:Lcom/android/vending/expansion/zipfile/ZipResourceFile;

    return-object v0
.end method

.method public static getOnActivityResultListeners()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Landroid/preference/PreferenceManager$OnActivityResultListener;",
            ">;"
        }
    .end annotation

    .line 252
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->onActivityResultListeners:Ljava/util/Set;

    return-object v0
.end method

.method public static getSDKVersion()I
    .locals 1

    .line 867
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    return v0
.end method

.method public static getSafeInsets()[I
    .locals 4
    .annotation build Landroid/annotation/SuppressLint;
        value = {
            "NewApi"
        }
    .end annotation

    const/4 v0, 0x4

    .line 801
    new-array v0, v0, [I

    fill-array-data v0, :array_0

    .line 802
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1c

    if-lt v1, v2, :cond_0

    .line 803
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v1

    .line 804
    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/View;->getRootWindowInsets()Landroid/view/WindowInsets;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/WindowInsets;->getDisplayCutout()Landroid/view/DisplayCutout;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 807
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getBoundingRects()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 809
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-eqz v2, :cond_0

    const/4 v2, 0x0

    .line 810
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetBottom()I

    move-result v3

    aput v3, v0, v2

    const/4 v2, 0x1

    .line 811
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetLeft()I

    move-result v3

    aput v3, v0, v2

    const/4 v2, 0x2

    .line 812
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetRight()I

    move-result v3

    aput v3, v0, v2

    const/4 v2, 0x3

    .line 813
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetTop()I

    move-result v1

    aput v1, v0, v2

    :cond_0
    return-object v0

    nop

    :array_0
    .array-data 4
        0x0
        0x0
        0x0
        0x0
    .end array-data
.end method

.method private static getSound()Lorg/cocos2dx/lib/Cocos2dxSound;
    .locals 2

    .line 878
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dSound:Lorg/cocos2dx/lib/Cocos2dxSound;

    if-nez v0, :cond_0

    .line 879
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxSound;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxSound;-><init>(Landroid/content/Context;)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dSound:Lorg/cocos2dx/lib/Cocos2dxSound;

    .line 881
    :cond_0
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dSound:Lorg/cocos2dx/lib/Cocos2dxSound;

    return-object v0
.end method

.method public static getStringForKey(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 626
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const-string v1, "Cocos2dxPrefsFile"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 628
    :try_start_0
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p1

    .line 631
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 633
    invoke-interface {v0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object p1

    invoke-interface {p1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getTemperature()I
    .locals 2

    const/4 v0, -0x1

    .line 741
    :try_start_0
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    if-eqz v1, :cond_0

    .line 742
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    invoke-interface {v1}, Lcom/enhance/gameservice/IGameTuningService;->getAbstractTemperature()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return v0

    :catch_0
    move-exception v1

    .line 746
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 3

    .line 325
    :try_start_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v0

    iget-object v0, v0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const-string v0, ""

    return-object v0
.end method

.method public static hasSoftKeys()Z
    .locals 6

    .line 832
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/16 v3, 0x11

    if-lt v0, v3, :cond_1

    .line 833
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v0

    invoke-interface {v0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v0

    .line 835
    new-instance v3, Landroid/util/DisplayMetrics;

    invoke-direct {v3}, Landroid/util/DisplayMetrics;-><init>()V

    .line 836
    invoke-virtual {v0, v3}, Landroid/view/Display;->getRealMetrics(Landroid/util/DisplayMetrics;)V

    .line 838
    iget v4, v3, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 839
    iget v3, v3, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 841
    new-instance v5, Landroid/util/DisplayMetrics;

    invoke-direct {v5}, Landroid/util/DisplayMetrics;-><init>()V

    .line 842
    invoke-virtual {v0, v5}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 844
    iget v0, v5, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 845
    iget v5, v5, Landroid/util/DisplayMetrics;->widthPixels:I

    sub-int/2addr v3, v5

    if-gtz v3, :cond_2

    sub-int/2addr v4, v0

    if-lez v4, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    goto :goto_0

    .line 850
    :cond_1
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-static {v0}, Landroid/view/ViewConfiguration;->get(Landroid/content/Context;)Landroid/view/ViewConfiguration;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/ViewConfiguration;->hasPermanentMenuKey()Z

    move-result v0

    const/4 v3, 0x4

    .line 851
    invoke-static {v3}, Landroid/view/KeyCharacterMap;->deviceHasKey(I)Z

    move-result v3

    if-nez v0, :cond_0

    if-nez v3, :cond_0

    :cond_2
    :goto_0
    return v1
.end method

.method public static init(Landroid/app/Activity;)V
    .locals 11

    .line 122
    sput-object p0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    .line 123
    move-object v0, p0

    check-cast v0, Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dxHelperListener:Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;

    .line 124
    sget-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sInited:Z

    if-nez v0, :cond_1

    .line 126
    invoke-virtual {p0}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const-string v1, "android.hardware.audio.low_latency"

    .line 127
    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result v0

    .line 129
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isSupportLowLatency:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const v1, 0xac44

    const/16 v2, 0xc0

    .line 134
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x11

    const/4 v5, 0x1

    if-lt v3, v4, :cond_0

    const-string v3, "audio"

    .line 135
    invoke-virtual {p0, v3}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/media/AudioManager;

    .line 139
    const-class v4, Landroid/media/AudioManager;

    .line 140
    new-array v6, v5, [Ljava/lang/Object;

    const-string v7, "PROPERTY_OUTPUT_SAMPLE_RATE"

    invoke-static {v4, v7}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->getConstantValue(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v7

    const/4 v8, 0x0

    aput-object v7, v6, v8

    .line 141
    new-array v7, v5, [Ljava/lang/Class;

    const-class v9, Ljava/lang/String;

    aput-object v9, v7, v8

    const-string v9, "getProperty"

    invoke-static {v3, v9, v7, v6}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->invokeInstanceMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    .line 144
    new-array v7, v5, [Ljava/lang/Object;

    const-string v10, "PROPERTY_OUTPUT_FRAMES_PER_BUFFER"

    invoke-static {v4, v10}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->getConstantValue(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    aput-object v4, v7, v8

    .line 145
    new-array v4, v5, [Ljava/lang/Class;

    const-class v10, Ljava/lang/String;

    aput-object v10, v4, v8

    invoke-static {v3, v9, v4, v7}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->invokeInstanceMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 148
    :try_start_0
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 149
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    .line 151
    sget-object v4, Lorg/cocos2dx/lib/Cocos2dxHelper;->TAG:Ljava/lang/String;

    const-string v6, "parseInt failed"

    invoke-static {v4, v6, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 153
    :goto_0
    sget-object v3, Lorg/cocos2dx/lib/Cocos2dxHelper;->TAG:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "sampleRate: "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", framesPerBuffer: "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 155
    :cond_0
    sget-object v3, Lorg/cocos2dx/lib/Cocos2dxHelper;->TAG:Ljava/lang/String;

    const-string v4, "android version is lower than 17"

    invoke-static {v3, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 158
    :goto_1
    invoke-static {v0, v1, v2}, Lorg/cocos2dx/lib/Cocos2dxHelper;->nativeSetAudioDeviceInfo(ZII)V

    .line 160
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    .line 162
    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->packageName:Ljava/lang/String;

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sPackageName:Ljava/lang/String;

    .line 164
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxMusic;-><init>(Landroid/content/Context;)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    .line 165
    invoke-virtual {p0}, Landroid/app/Activity;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAssetManager:Landroid/content/res/AssetManager;

    .line 166
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAssetManager:Landroid/content/res/AssetManager;

    invoke-static {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxHelper;->nativeSetContext(Landroid/content/Context;Landroid/content/res/AssetManager;)V

    .line 168
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxBitmap;->setContext(Landroid/content/Context;)V

    const-string v0, "vibrator"

    .line 170
    invoke-virtual {p0, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Vibrator;

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sVibrateService:Landroid/os/Vibrator;

    .line 172
    sput-boolean v5, Lorg/cocos2dx/lib/Cocos2dxHelper;->sInited:Z

    .line 175
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/enhance/gameservice/IGameTuningService;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "com.enhance.gameservice"

    .line 176
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 177
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->connection:Landroid/content/ServiceConnection;

    invoke-virtual {p0, v0, v1, v5}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    :cond_1
    return-void
.end method

.method public static isActivityVisible()Z
    .locals 1

    .line 256
    sget-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivityVisible:Z

    return v0
.end method

.method public static isBackgroundMusicPlaying()Z
    .locals 1

    .line 396
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->isBackgroundMusicPlaying()Z

    move-result v0

    return v0
.end method

.method public static isCutoutEnabled()Z
    .locals 3
    .annotation build Landroid/annotation/SuppressLint;
        value = {
            "InlinedApi"
        }
    .end annotation

    .line 786
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x0

    const/16 v2, 0x1c

    if-lt v0, v2, :cond_0

    .line 787
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 788
    iget v0, v0, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    const/4 v1, 0x1

    :cond_0
    return v1
.end method

.method public static isScreenRound()Z
    .locals 2

    .line 770
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_0

    .line 771
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Configuration;->isScreenRound()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private static native nativeSetAudioDeviceInfo(ZII)V
.end method

.method private static native nativeSetContext(Landroid/content/Context;Landroid/content/res/AssetManager;)V
.end method

.method private static native nativeSetEditTextDialogResult([B)V
.end method

.method public static onEnterBackground()V
    .locals 1

    .line 479
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->onEnterBackground()V

    .line 480
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->onEnterBackground()V

    return-void
.end method

.method public static onEnterForeground()V
    .locals 1

    .line 484
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->onEnterForeground()V

    .line 485
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->onEnterForeground()V

    return-void
.end method

.method public static onPause()V
    .locals 1

    const/4 v0, 0x0

    .line 472
    sput-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivityVisible:Z

    .line 473
    sget-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAccelerometerEnabled:Z

    if-eqz v0, :cond_0

    .line 474
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->disable()V

    :cond_0
    return-void
.end method

.method public static onResume()V
    .locals 1

    const/4 v0, 0x1

    .line 462
    sput-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivityVisible:Z

    .line 463
    sget-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sAccelerometerEnabled:Z

    if-eqz v0, :cond_0

    .line 464
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->enableAccel()V

    .line 466
    :cond_0
    sget-boolean v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCompassEnabled:Z

    if-eqz v0, :cond_1

    .line 467
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->enableCompass()V

    :cond_1
    return-void
.end method

.method public static openURL(Ljava/lang/String;)Z
    .locals 2

    .line 335
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.VIEW"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 336
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 337
    sget-object p0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    invoke-virtual {p0, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static pauseAllEffects()V
    .locals 1

    .line 440
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->pauseAllEffects()V

    return-void
.end method

.method public static pauseBackgroundMusic()V
    .locals 1

    .line 380
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->pauseBackgroundMusic()V

    return-void
.end method

.method public static pauseEffect(I)V
    .locals 1

    .line 420
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->pauseEffect(I)V

    return-void
.end method

.method public static playBackgroundMusic(Ljava/lang/String;Z)V
    .locals 1

    .line 372
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxMusic;->playBackgroundMusic(Ljava/lang/String;Z)V

    return-void
.end method

.method public static playEffect(Ljava/lang/String;ZFFF)I
    .locals 6

    .line 412
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    move-object v1, p0

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    invoke-virtual/range {v0 .. v5}, Lorg/cocos2dx/lib/Cocos2dxSound;->playEffect(Ljava/lang/String;ZFFF)I

    move-result p0

    return p0
.end method

.method public static preloadBackgroundMusic(Ljava/lang/String;)V
    .locals 1

    .line 368
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->preloadBackgroundMusic(Ljava/lang/String;)V

    return-void
.end method

.method public static preloadEffect(Ljava/lang/String;)V
    .locals 1

    .line 408
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->preloadEffect(Ljava/lang/String;)I

    return-void
.end method

.method public static resumeAllEffects()V
    .locals 1

    .line 444
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->resumeAllEffects()V

    return-void
.end method

.method public static resumeBackgroundMusic()V
    .locals 1

    .line 376
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->resumeBackgroundMusic()V

    return-void
.end method

.method public static resumeEffect(I)V
    .locals 1

    .line 416
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->resumeEffect(I)V

    return-void
.end method

.method public static rewindBackgroundMusic()V
    .locals 1

    .line 388
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->rewindBackgroundMusic()V

    return-void
.end method

.method public static runOnGLThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 117
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    check-cast v0, Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->runOnGLThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static setAccelerometerInterval(F)V
    .locals 1

    .line 307
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getAccelerometer()Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    move-result-object v0

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->setInterval(F)V

    return-void
.end method

.method static setAudioFocus(Z)V
    .locals 1

    .line 452
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->setAudioFocus(Z)V

    .line 453
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->setAudioFocus(Z)V

    return-void
.end method

.method public static setBackgroundMusicVolume(F)V
    .locals 1

    .line 404
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->setBackgroundVolume(F)V

    return-void
.end method

.method public static setBoolForKey(Ljava/lang/String;Z)V
    .locals 3

    .line 638
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const-string v1, "Cocos2dxPrefsFile"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 639
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 640
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 641
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public static setDoubleForKey(Ljava/lang/String;D)V
    .locals 3

    .line 660
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const-string v1, "Cocos2dxPrefsFile"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 661
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    double-to-float p1, p1

    .line 662
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putFloat(Ljava/lang/String;F)Landroid/content/SharedPreferences$Editor;

    .line 663
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public static setEditTextDialogResult(Ljava/lang/String;)V
    .locals 2

    :try_start_0
    const-string v0, "UTF8"

    .line 499
    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    .line 501
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dxHelperListener:Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;

    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxHelper$3;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lib/Cocos2dxHelper$3;-><init>([B)V

    invoke-interface {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;->runOnGLThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static setEffectsVolume(F)V
    .locals 1

    .line 432
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->setEffectsVolume(F)V

    return-void
.end method

.method public static setFPS(I)I
    .locals 2

    const/4 v0, -0x1

    .line 717
    :try_start_0
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    if-eqz v1, :cond_0

    .line 718
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    invoke-interface {v1, p0}, Lcom/enhance/gameservice/IGameTuningService;->setFramePerSecond(I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :cond_0
    return v0

    :catch_0
    move-exception p0

    .line 722
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static setFloatForKey(Ljava/lang/String;F)V
    .locals 3

    .line 652
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const-string v1, "Cocos2dxPrefsFile"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 653
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 654
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putFloat(Ljava/lang/String;F)Landroid/content/SharedPreferences$Editor;

    .line 655
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public static setIntegerForKey(Ljava/lang/String;I)V
    .locals 3

    .line 645
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const-string v1, "Cocos2dxPrefsFile"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 646
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 647
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 648
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public static setKeepScreenOn(Z)V
    .locals 1

    .line 316
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    check-cast v0, Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->setKeepScreenOn(Z)V

    return-void
.end method

.method public static setLowPowerMode(Z)I
    .locals 2

    const/4 v0, -0x1

    .line 753
    :try_start_0
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    if-eqz v1, :cond_0

    .line 754
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    invoke-interface {v1, p0}, Lcom/enhance/gameservice/IGameTuningService;->setGamePowerSaving(Z)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :cond_0
    return v0

    :catch_0
    move-exception p0

    .line 758
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static setResolutionPercent(I)I
    .locals 2

    const/4 v0, -0x1

    .line 705
    :try_start_0
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    if-eqz v1, :cond_0

    .line 706
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxHelper;->mGameServiceBinder:Lcom/enhance/gameservice/IGameTuningService;

    invoke-interface {v1, p0}, Lcom/enhance/gameservice/IGameTuningService;->setPreferredResolution(I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :cond_0
    return v0

    :catch_0
    move-exception p0

    .line 710
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static setStringForKey(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 667
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sActivity:Landroid/app/Activity;

    const-string v1, "Cocos2dxPrefsFile"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 668
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 669
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 670
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method private static showDialog(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 493
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dxHelperListener:Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;

    invoke-interface {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static stopAllEffects()V
    .locals 1

    .line 448
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->stopAllEffects()V

    return-void
.end method

.method public static stopBackgroundMusic()V
    .locals 1

    .line 384
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->stopBackgroundMusic()V

    return-void
.end method

.method public static stopEffect(I)V
    .locals 1

    .line 424
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->stopEffect(I)V

    return-void
.end method

.method public static terminateProcess()V
    .locals 1

    .line 489
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v0

    invoke-static {v0}, Landroid/os/Process;->killProcess(I)V

    return-void
.end method

.method public static unloadEffect(Ljava/lang/String;)V
    .locals 1

    .line 436
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getSound()Lorg/cocos2dx/lib/Cocos2dxSound;

    move-result-object v0

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->unloadEffect(Ljava/lang/String;)V

    return-void
.end method

.method public static vibrate(F)V
    .locals 3

    .line 320
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sVibrateService:Landroid/os/Vibrator;

    const/high16 v1, 0x447a0000    # 1000.0f

    mul-float p0, p0, v1

    float-to-long v1, p0

    invoke-virtual {v0, v1, v2}, Landroid/os/Vibrator;->vibrate(J)V

    return-void
.end method

.method public static willPlayBackgroundMusic()Z
    .locals 1

    .line 392
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxHelper;->sCocos2dMusic:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->willPlayBackgroundMusic()Z

    move-result v0

    return v0
.end method
