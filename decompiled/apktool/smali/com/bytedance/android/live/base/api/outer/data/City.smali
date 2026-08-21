.class public Lcom/bytedance/android/live/base/api/outer/data/City;
.super Ljava/lang/Object;


# instance fields
.field cityName:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 8
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/City;->cityName:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getCityName()Ljava/lang/String;
    .locals 1

    .line 12
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/outer/data/City;->cityName:Ljava/lang/String;

    return-object v0
.end method

.method public setCityName(Ljava/lang/String;)V
    .locals 0

    .line 16
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/City;->cityName:Ljava/lang/String;

    return-void
.end method
