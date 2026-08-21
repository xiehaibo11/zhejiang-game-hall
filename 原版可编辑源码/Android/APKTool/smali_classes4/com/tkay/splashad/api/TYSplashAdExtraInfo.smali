.class public Lcom/tkay/splashad/api/TYSplashAdExtraInfo;
.super Ljava/lang/Object;


# instance fields
.field private atSplashEyeAd:Lcom/tkay/splashad/api/ITYSplashEyeAd;

.field private dismissType:I


# direct methods
.method public constructor <init>(ILcom/tkay/splashad/api/ITYSplashEyeAd;)V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    iput p1, p0, Lcom/tkay/splashad/api/TYSplashAdExtraInfo;->dismissType:I

    .line 10
    iput-object p2, p0, Lcom/tkay/splashad/api/TYSplashAdExtraInfo;->atSplashEyeAd:Lcom/tkay/splashad/api/ITYSplashEyeAd;

    return-void
.end method


# virtual methods
.method public getAtSplashEyeAd()Lcom/tkay/splashad/api/ITYSplashEyeAd;
    .locals 1

    .line 18
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAdExtraInfo;->atSplashEyeAd:Lcom/tkay/splashad/api/ITYSplashEyeAd;

    return-object v0
.end method

.method public getDismissType()I
    .locals 1

    .line 14
    iget v0, p0, Lcom/tkay/splashad/api/TYSplashAdExtraInfo;->dismissType:I

    return v0
.end method
