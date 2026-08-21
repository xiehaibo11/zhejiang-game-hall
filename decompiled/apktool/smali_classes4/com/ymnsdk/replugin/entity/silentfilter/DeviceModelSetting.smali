.class public Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;
.super Ljava/lang/Object;
.source "DeviceModelSetting.java"


# instance fields
.field is_white_list:I

.field list:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getArray()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 31
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;->list:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 32
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;->list:Ljava/lang/String;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public getIs_white_list()I
    .locals 1

    .line 14
    iget v0, p0, Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;->is_white_list:I

    return v0
.end method

.method public getList()Ljava/lang/String;
    .locals 1

    .line 22
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;->list:Ljava/lang/String;

    return-object v0
.end method

.method public setIs_white_list(I)V
    .locals 0

    .line 18
    iput p1, p0, Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;->is_white_list:I

    return-void
.end method

.method public setList(Ljava/lang/String;)V
    .locals 0

    .line 26
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;->list:Ljava/lang/String;

    return-void
.end method
