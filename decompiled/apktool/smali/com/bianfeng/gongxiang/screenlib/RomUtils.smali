.class Lcom/bianfeng/gongxiang/screenlib/RomUtils;
.super Ljava/lang/Object;
.source "RomUtils.java"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static getManufacturer()Ljava/lang/String;
    .locals 1

    .line 50
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    return-object v0
.end method

.method public static isHuaWei()Z
    .locals 2

    .line 17
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "huawei"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static isMeizu()Z
    .locals 2

    .line 25
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Meizu"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static isMimu()Z
    .locals 2

    .line 9
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Xiaomi"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static isOppo()Z
    .locals 2

    .line 42
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "oppo"

    .line 43
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static isVivo()Z
    .locals 2

    .line 33
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "vivo"

    .line 34
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
