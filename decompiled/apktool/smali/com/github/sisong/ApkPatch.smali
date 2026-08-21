.class public Lcom/github/sisong/ApkPatch;
.super Ljava/lang/Object;
.source "ApkPatch.java"


# static fields
.field public static volatile isDebug:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static native initApkDiff(ZZ)V
.end method

.method public static native patch(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;I)I
.end method
