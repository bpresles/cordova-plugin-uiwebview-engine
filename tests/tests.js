/*
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
*/

/* jshint jasmine: true */

exports.defineAutoTests = function () {
    describe('cordova-plugin-uiwebview-engine (cordova)', function () {
        it("cordova-plugin-uiwebview-engine.spec.1 should exist", function () {
            //expect(window).toBeDefined();
        });
    });
};

exports.defineManualTests = function (contentEl, createActionButton) {

    contentEl.innerHTML = 'Your HTML instructions here';

    createActionButton('Do something 1', function () {
        // do something 1;
    }, 'do-something-1');

    createActionButton('Do something 2', function () {
        // do something 2;
    }, 'do-something-2');

};
